package com.plume.common.domain.base.usecase

import com.plume.common.domain.base.model.exception.DomainException
import com.plume.common.domain.base.model.exception.UnknownDomainException

interface BaseUseCase<REQUEST, RESULT> {
    suspend fun execute(value: REQUEST, callback: (RESULT) -> Unit)

    fun onError(throwable: Throwable): DomainException = UnknownDomainException(throwable)
}
