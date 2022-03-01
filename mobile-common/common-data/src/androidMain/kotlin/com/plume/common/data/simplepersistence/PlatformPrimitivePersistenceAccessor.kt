package com.plume.common.data.simplepersistence

import android.content.SharedPreferences
import androidx.core.content.edit
import com.plume.common.data.storage.BooleanKey
import com.plume.common.data.storage.FloatKey
import com.plume.common.data.storage.IntegerKey
import com.plume.common.data.storage.LongKey
import com.plume.common.data.storage.PrimitivePersistenceAccessor
import com.plume.common.data.storage.StringKey
import com.plume.common.data.storage.StringLegacyMigrationKey

class PlatformPrimitivePersistenceAccessor(
    private val sharedPreferences: SharedPreferences
) : PrimitivePersistenceAccessor {

    override fun getString(stringKey: StringKey) =
        sharedPreferences.getString(stringKey.key, stringKey.defaultValue) ?: stringKey.defaultValue

    override fun putString(stringKey: StringKey, value: String) =
        sharedPreferences.edit { putString(stringKey.key, value) }

    override fun getInt(integerKey: IntegerKey) =
        sharedPreferences.getInt(integerKey.key, integerKey.defaultValue)

    override fun putInt(integerKey: IntegerKey, value: Int) =
        sharedPreferences.edit { putInt(integerKey.key, value) }

    override fun getBoolean(booleanKey: BooleanKey) =
        sharedPreferences.getBoolean(booleanKey.key, booleanKey.defaultValue)

    override fun putBoolean(booleanKey: BooleanKey, value: Boolean) =
        sharedPreferences.edit { putBoolean(booleanKey.key, value) }

    override fun getFloat(floatKey: FloatKey) =
        sharedPreferences.getFloat(floatKey.key, floatKey.defaultValue)

    override fun putFloat(floatKey: FloatKey, value: Float) {
        sharedPreferences.edit { putFloat(floatKey.key, value) }
    }

    override fun getLong(longKey: LongKey): Long =
        sharedPreferences.getLong(longKey.key, longKey.defaultValue)

    override fun putLong(longKey: LongKey, value: Long) {
        sharedPreferences.edit { putLong(longKey.key, value) }
    }

    override fun remove(key: String) {
        sharedPreferences.edit { remove(key) }
    }

    override fun clear() {
        sharedPreferences.edit { clear() }
    }

    override fun getString(complexKey: StringLegacyMigrationKey): String? {
        val defaultValue = getString(complexKey.defaultKey)
        if (defaultValue != complexKey.defaultKey.defaultValue) {
            return defaultValue
        }
        complexKey.legacyKeys.forEach { key ->
            val legacyValue = sharedPreferences.getString(key, complexKey.defaultValue)
            if (legacyValue != complexKey.defaultValue) {
                putString(complexKey.defaultKey, legacyValue.orEmpty())
                return legacyValue
            }
        }
        return null
    }
}
