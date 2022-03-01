package com.plume.common.domain.base.usecase

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.launch
import kotlinx.coroutines.withContext

abstract class ContinuousExecuteUseCase<REQUEST, RESULT> constructor(
    private val coroutineContextProvider: CoroutineContextProvider
) : BaseUseCase<REQUEST, RESULT> {
    final override suspend fun execute(value: REQUEST, callback: (RESULT) -> Unit) {
        withContext(coroutineContextProvider.io) {
            executeInBackground(value) { result ->
                CoroutineScope(coroutineContextProvider.main).launch {
                    callback(result)
                }
            }
        }
    }

    abstract suspend fun executeInBackground(
        request: REQUEST,
        callback: (RESULT) -> Unit
    )

    open fun cleanup() {}
}
