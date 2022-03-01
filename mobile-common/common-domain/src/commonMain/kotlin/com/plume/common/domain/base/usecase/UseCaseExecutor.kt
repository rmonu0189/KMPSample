package com.plume.common.domain.base.usecase

import com.plume.common.domain.base.model.exception.DomainException
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch

open class UseCaseExecutor(
    private var coroutineScope: CoroutineScope
) {

    open fun <OUT_TYPE> execute(
        useCase: BaseUseCase<Unit, OUT_TYPE>,
        callback: (OUT_TYPE) -> Unit = {},
        onError: (DomainException) -> Unit = {}
    ) = execute(useCase, Unit, callback, onError)

    open fun <IN_TYPE, OUT_TYPE> execute(
        useCase: BaseUseCase<IN_TYPE, OUT_TYPE>,
        value: IN_TYPE,
        callback: (OUT_TYPE) -> Unit = {},
        onError: (DomainException) -> Unit = {}
    ): RunningExecution {
        val job = launchUseCaseExecution(useCase, value, callback, onError)
        return RunningUseCaseExecution(job)
    }

    private fun <IN_TYPE, OUT_TYPE> launchUseCaseExecution(
        useCase: BaseUseCase<IN_TYPE, OUT_TYPE>,
        value: IN_TYPE,
        callback: (OUT_TYPE) -> Unit,
        onError: (DomainException) -> Unit
    ) = coroutineScope.launch {
        try {
            useCase.execute(value, callback)
        } catch (throwable: Throwable) {
            onError(
                if (throwable is DomainException) {
                    throwable
                } else {
                    useCase.onError(throwable)
                }
            )
        }
    }

    class RunningUseCaseExecution(private val job: Job) : RunningExecution {
        override fun isRunning() = job.isActive

        override fun cancel() {
            job.cancel()
        }
    }
}