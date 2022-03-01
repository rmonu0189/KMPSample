package com.plume.common.domain.exception

import com.plume.common.domain.base.model.exception.DomainException

class ErrorResponseDomainException(throwable: Throwable, val errorCode: Int) : DomainException(throwable)
