package com.plume.common.domain.exception

import com.plume.common.domain.base.model.exception.DomainException

data class UnauthorizedAccessDomainException(override val throwable: Throwable) : DomainException(throwable)
