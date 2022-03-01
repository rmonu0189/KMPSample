package com.plume.common.domain.base.usecase.provider

import com.plume.common.domain.`interface`.UserRepositoryInterface
import com.plume.common.domain.base.usecase.BackgroundScope
import com.plume.common.domain.base.usecase.IosDispatchersCoroutineContextProvider
import com.plume.common.domain.base.usecase.MainScope
import com.plume.common.domain.base.usecase.UseCaseExecutor
import com.plume.common.domain.usecase.RegisterUserUseCase

class UseCaseProvider(
    private val userRepository: UserRepositoryInterface
) {
    val useCaseExecutor = UseCaseExecutor(coroutineScope = MainScope())
    val registerUserUseCase = RegisterUserUseCase(
        repository = userRepository,
        coroutineContextProvider = IosDispatchersCoroutineContextProvider(
            main = MainScope().coroutineContext,
            io = BackgroundScope().coroutineContext
        )
    )
}