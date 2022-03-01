package com.plume.common.data.provider

import com.plume.common.data.datasources.UserRemoteDataSource
import com.plume.common.data.repository.UserRepository
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.usecase.RegisterUserUseCase
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlin.coroutines.CoroutineContext

class RepositoryProvider {
    val iosContextProvider = IosDispatchersCoroutineContextProvider()
    val userRepository = UserRepository(userRemoteDataSource = UserRemoteDataSource())
}

class UseCaseProvider() {
    val mainScope = DataMainScope()
    val backgroundScope = DataBackgroundScope()
    val repositoryProvider = RepositoryProvider()

    val registerUseCase = RegisterUserUseCase(
        repository = repositoryProvider.userRepository,
        coroutineContextProvider = repositoryProvider.iosContextProvider
    )
}

data class IosDispatchersCoroutineContextProvider(
    override val main: CoroutineContext = DataMainScope().coroutineContext,
    override val io: CoroutineContext = DataBackgroundScope().coroutineContext
) : CoroutineContextProvider

class DataMainScope :
    CoroutineScope {
    override val coroutineContext: CoroutineContext = Dispatchers.Main
}

class DataBackgroundScope :
    CoroutineScope {
    override val coroutineContext: CoroutineContext = Dispatchers.Default
}
