package com.plume.common.domain.base.model

sealed class OptionalValue<TYPE : Any>(
    open val value: TYPE,
    val isSet: Boolean
) {
    fun valueIfSet(): TYPE? = if (isSet) value else null

    data class Unset<TYPE : Any>(
        private val defaultValue: TYPE
    ) : OptionalValue<TYPE>(defaultValue, false)

    data class Set<TYPE : Any>(override val value: TYPE) : OptionalValue<TYPE>(value, true)

    companion object {
        fun <TYPE : Any> fromNullable(value: TYPE?, defaultValue: TYPE) = if (value == null) {
            Unset(defaultValue)
        } else {
            Set(value)
        }
    }
}

fun <T : Any> T?.toOptional(defaultValue: T) = if (this == null) {
    OptionalValue.Unset(defaultValue)
} else {
    OptionalValue.Set(this)
}

fun <T : Any> T.nonOptional() = OptionalValue.Set(this)

val unsetString = OptionalValue.Unset("")
