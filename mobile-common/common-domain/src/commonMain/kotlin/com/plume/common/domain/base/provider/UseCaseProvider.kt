package com.plume.common.domain.base.provider

import com.plume.common.domain.`interface`.UserRepositoryInterface
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.usecase.RegisterUserUseCase

data class UseCaseProvider(
    private val coroutineContextProvider: CoroutineContextProvider
) {
    fun registerUserUseCase(repository: UserRepositoryInterface): RegisterUserUseCase {
        return RegisterUserUseCase(
            repository = repository,
            coroutineContextProvider = coroutineContextProvider
        )
    }
}