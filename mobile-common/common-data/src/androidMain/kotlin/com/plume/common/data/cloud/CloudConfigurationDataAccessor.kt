package com.plume.common.data.cloud

import com.google.firebase.remoteconfig.FirebaseRemoteConfig
import com.google.firebase.remoteconfig.FirebaseRemoteConfig.LAST_FETCH_STATUS_FAILURE
import com.google.firebase.remoteconfig.FirebaseRemoteConfig.LAST_FETCH_STATUS_NO_FETCH_YET
import com.google.firebase.remoteconfig.FirebaseRemoteConfig.LAST_FETCH_STATUS_SUCCESS
import com.google.firebase.remoteconfig.FirebaseRemoteConfig.LAST_FETCH_STATUS_THROTTLED
import com.plume.common.logger.Logger
import dagger.Lazy

class CloudConfigurationDataAccessor(
    private val lazyFirebaseRemoteConfig: Lazy<FirebaseRemoteConfig>,
    private val logger: Logger
) : CloudConfigurationAccessor, CloudConfigurationRefresher {

    private val firebaseRemoteConfig by lazy { lazyFirebaseRemoteConfig.get() }

    override fun getString(configurationKey: CloudConfigurationKey) =
        firebaseRemoteConfig.getString(configurationKey.key)

    override fun getBoolean(configurationKey: CloudConfigurationKey) =
        firebaseRemoteConfig.getBoolean(configurationKey.key)

    override fun getInteger(configurationKey: CloudConfigurationKey) =
        firebaseRemoteConfig.getLong(configurationKey.key).toInt()

    override fun getLong(configurationKey: CloudConfigurationKey) =
        firebaseRemoteConfig.getLong(configurationKey.key)

    override fun refresh() {
        firebaseRemoteConfig.fetch(0).addOnCompleteListener {
            firebaseRemoteConfig.activate().addOnCompleteListener { task ->
                if (task.isSuccessful) {
                    logger.i("_TAG ---> Firebase remote config fetch request completed ${System.currentTimeMillis()}")
                    val firebaseRemoteConfigInfo = firebaseRemoteConfig.info
                    when (firebaseRemoteConfigInfo.lastFetchStatus) {
                        LAST_FETCH_STATUS_THROTTLED -> logger.e(
                            "Firebase remote config failed",
                            Exception("LAST_FETCH_STATUS_THROTTLED")
                        )
                        LAST_FETCH_STATUS_FAILURE -> logger.e(
                            "Firebase remote config failed",
                            Exception("LAST_FETCH_STATUS_FAILURE")
                        )
                        LAST_FETCH_STATUS_NO_FETCH_YET -> logger.w(
                            "Firebase remote config not executed: LAST_FETCH_STATUS_NO_FETCH_YET"
                        )
                        LAST_FETCH_STATUS_SUCCESS -> {
                            logger.i("LAST_FETCH_STATUS_SUCCESS")
                            logger.i("Fetched time ms: ${firebaseRemoteConfigInfo.fetchTimeMillis}")
                            logger.i("Minimum fetch interval: ${firebaseRemoteConfigInfo.configSettings.minimumFetchIntervalInSeconds}")
                            logger.i("Fetch Timeout In Seconds: ${firebaseRemoteConfigInfo.configSettings.fetchTimeoutInSeconds}")
                            logger.i("Fetched status: ${firebaseRemoteConfigInfo.lastFetchStatus}")
                            for (entry in firebaseRemoteConfig.all.entries) {
                                logger.i("${entry.key} =  ${entry.value.asString()}")
                            }
                        }
                    }
                    logger.i("<--- Firebase remote config response completed")
                } else {
                    logger.e("Firebase remove config fetch failed:", Exception(task.exception))
                }
            }
        }
    }
}
