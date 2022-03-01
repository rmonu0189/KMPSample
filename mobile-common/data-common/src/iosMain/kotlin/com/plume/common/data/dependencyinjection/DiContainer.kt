package com.plume.common.data.dependencyinjection

import co.touchlab.stately.freeze
import com.plume.common.data.dependencyinjection.usecasefactories.UseCaseFactory
import com.plume.common.domain.base.usecase.IosDispatchersCoroutineContextProvider
import com.plume.common.domain.base.usecase.MainScope
import com.plume.common.domain.base.usecase.UseCaseExecutor

class DiContainer {
    private val coroutineContextProvider = IosDispatchersCoroutineContextProvider()

    val useCaseExecutor = UseCaseExecutor(
        coroutineScope = MainScope()
    ).freeze()

    var useCase = UseCaseFactory(
        coroutineContextProvider = coroutineContextProvider
    ).freeze()
}