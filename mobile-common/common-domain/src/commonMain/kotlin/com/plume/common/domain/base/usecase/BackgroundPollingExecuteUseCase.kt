package com.plume.common.domain.base.usecase

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.withContext

private const val DEFAULT_POOLING_INTERVAL_MILLISECONDS = 2000L

abstract class BackgroundPollingExecuteUseCase<REQUEST, RESULT> constructor(
    private val coroutineContextProvider: CoroutineContextProvider,
    private val pollingIntervalInMilliseconds: Long = DEFAULT_POOLING_INTERVAL_MILLISECONDS
) : BaseUseCase<REQUEST, RESULT> {
    final override suspend fun execute(value: REQUEST, callback: (RESULT) -> Unit) {
        while (true) {
            val result = withContext(coroutineContextProvider.io) {
                executeInBackground(value, this)
            }
            callback(result)
            delay(pollingIntervalInMilliseconds)
        }
    }

    abstract suspend fun executeInBackground(
        request: REQUEST,
        coroutineScope: CoroutineScope
    ): RESULT
}
