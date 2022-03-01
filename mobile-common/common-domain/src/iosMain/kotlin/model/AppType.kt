package com.plume.common.domain.base.model

sealed class AppType {
    object Residential : AppType()
    object Business : AppType()
}
