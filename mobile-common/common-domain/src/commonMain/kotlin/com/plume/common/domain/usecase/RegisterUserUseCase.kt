package com.plume.common.domain.usecase

import com.plume.common.domain.`interface`.UserRepositoryInterface
import com.plume.common.domain.base.usecase.BackgroundExecuteUseCase
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.model.UserRequestModel
import com.plume.common.domain.model.UserResponseModel
import kotlinx.coroutines.CoroutineScope

class RegisterUserUseCase(
    private val repository: UserRepositoryInterface,
    coroutineContextProvider: CoroutineContextProvider
) : BackgroundExecuteUseCase<UserRequestModel, UserResponseModel>(coroutineContextProvider) {
    override suspend fun executeInBackground(
        request: UserRequestModel,
        coroutineScope: CoroutineScope
    ) = repository.register(request)
}