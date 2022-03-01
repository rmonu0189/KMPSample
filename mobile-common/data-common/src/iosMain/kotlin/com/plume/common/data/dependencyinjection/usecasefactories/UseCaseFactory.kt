package com.plume.common.data.dependencyinjection.usecasefactories

import com.plume.common.data.dependencyinjection.repositories.RepositoryFactory
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.usecase.RegisterUserUseCase

class UseCaseFactory(coroutineContextProvider: CoroutineContextProvider) {
    private val repositoryFactory = RepositoryFactory()

    val registerUseCase = RegisterUserUseCase(
        repository = repositoryFactory.userRepository,
        coroutineContextProvider = coroutineContextProvider
    )
}