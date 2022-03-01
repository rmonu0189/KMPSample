package com.plume.common.domain.extensions

fun Boolean?.orFalse() = this == true

fun Int?.orZero() = this ?: 0

fun Long?.orZero() = this ?: 0

fun Float?.orZero() = this ?: 0F
