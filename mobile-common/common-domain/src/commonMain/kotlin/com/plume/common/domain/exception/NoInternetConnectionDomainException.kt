package com.plume.common.domain.exception

import com.plume.common.domain.base.model.exception.DomainException

data class NoInternetConnectionDomainException(override val throwable: Throwable) :
    DomainException(throwable)
