package com.plume.common.domain.base.extension

import com.plume.common.domain.base.usecase.CoroutineContextProvider
import kotlinx.coroutines.Deferred
import kotlinx.coroutines.Job
import kotlinx.coroutines.async
import kotlinx.coroutines.awaitAll
import kotlinx.coroutines.withContext
import kotlin.coroutines.cancellation.CancellationException
import kotlin.coroutines.suspendCoroutine

suspend fun <T1 : Any, T2 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    combineFunction: (T1, T2) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(results[0] as T1, results[1] as T2)
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    combineFunction: (T1, T2, T3) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(results[0] as T1, results[1] as T2, results[2] as T3)
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, T4 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    function4: suspend () -> T4,
    combineFunction: (T1, T2, T3, T4) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() },
            async { function4() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(results[0] as T1, results[1] as T2, results[2] as T3, results[3] as T4)
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, T4 : Any, T5 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    function4: suspend () -> T4,
    function5: suspend () -> T5,
    combineFunction: (T1, T2, T3, T4, T5) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() },
            async { function4() },
            async { function5() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(
        results[0] as T1,
        results[1] as T2,
        results[2] as T3,
        results[3] as T4,
        results[4] as T5,
    )
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, T4 : Any, T5 : Any, T6 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    function4: suspend () -> T4,
    function5: suspend () -> T5,
    function6: suspend () -> T6,
    combineFunction: (T1, T2, T3, T4, T5, T6) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() },
            async { function4() },
            async { function5() },
            async { function6() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(
        results[0] as T1,
        results[1] as T2,
        results[2] as T3,
        results[3] as T4,
        results[4] as T5,
        results[5] as T6
    )
}

suspend fun <T1 : Any, T2 : Any> CoroutineContextProvider.parallel(
    function1: suspend () -> T1,
    function2: suspend () -> T2
) {
    withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() }
        )
    }
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, T4 : Any> CoroutineContextProvider.parallel(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    function4: suspend () -> T4
) {
    withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() },
            async { function4() }
        )
    }
}

suspend fun <T : Any, R : Any> CoroutineContextProvider.asParallel(
    sourceValues: Collection<T>,
    transformFunction: suspend (T) -> R
): List<R> {
    val deferredList = mutableListOf<Deferred<R>>()
    withContext(io) {
        sourceValues.forEach {
            val deferred = async {
                transformFunction(it)
            }
            deferredList.add(deferred)
        }
    }
    return deferredList.awaitAll()
}

suspend fun <RESULT : Any> CoroutineContextProvider.awaitFirst(
    vararg functions: suspend () -> RESULT
): RESULT {
    return withContext(io + Job()) {
        return@withContext suspendCoroutine<RESULT> { continuation ->
            val deferredJobs = mutableListOf<Deferred<Unit>>()
            functions.forEach { function ->
                deferredJobs.add(
                    async {
                        try {
                            continuation.resumeWith(Result.success(function()))
                        } catch (exception: Exception) {
                            when (exception) {
                                is CancellationException, is IllegalStateException -> {
                                    // Ignore both exceptions. IllegalStateException is used to filter "Already resumed" error
                                }
                                else -> throw exception
                            }
                        }
                        deferredJobs.forEach {
                            if (it.isActive) {
                                it.cancel()
                            }
                        }
                    }
                )
            }
        }
    }
}

suspend fun <T1 : Any, T2 : Any, T3 : Any, T4 : Any, T5 : Any, T6 : Any, T7 : Any, T8 : Any, R : Any> CoroutineContextProvider.zip(
    function1: suspend () -> T1,
    function2: suspend () -> T2,
    function3: suspend () -> T3,
    function4: suspend () -> T4,
    function5: suspend () -> T5,
    function6: suspend () -> T6,
    function7: suspend () -> T7,
    function8: suspend () -> T8,
    combineFunction: (T1, T2, T3, T4, T5, T6, T7, T8) -> R
): R {
    val results = withContext(io) {
        awaitAll(
            async { function1() },
            async { function2() },
            async { function3() },
            async { function4() },
            async { function5() },
            async { function6() },
            async { function7() },
            async { function8() }
        )
    }
    @Suppress("UNCHECKED_CAST")
    return combineFunction(
        results[0] as T1,
        results[1] as T2,
        results[2] as T3,
        results[3] as T4,
        results[4] as T5,
        results[5] as T6,
        results[6] as T7,
        results[7] as T8
    )
}
