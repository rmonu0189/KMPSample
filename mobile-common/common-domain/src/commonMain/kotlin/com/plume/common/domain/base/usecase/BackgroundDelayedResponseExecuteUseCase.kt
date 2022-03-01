package com.plume.common.domain.base.usecase

import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.delay
import kotlinx.coroutines.withContext

abstract class BackgroundDelayedResponseExecuteUseCase<REQUEST, RESULT> constructor(
    private val coroutineContextProvider: CoroutineContextProvider
) : BaseUseCase<REQUEST, RESULT> {

    open val delayResponseInMilliseconds: Long = 2000L

    final override suspend fun execute(value: REQUEST, callback: (RESULT) -> Unit) {
        val result = withContext(coroutineContextProvider.io) {
            executeInBackground(value, this)
        }
        delay(delayResponseInMilliseconds)
        callback(result)
    }

    abstract suspend fun executeInBackground(
        request: REQUEST,
        coroutineScope: CoroutineScope
    ): RESULT
}
