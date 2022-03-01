package com.plume.common.domain.base.usecase

interface Cancellable {
    fun cancel()
}

interface RunningExecution : Cancellable {
    fun isRunning(): Boolean
}

fun MutableSet<Cancellable>.cancelAll() {
    forEach { it.cancel() }
    clear()
}
