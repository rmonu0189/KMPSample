package com.plume.common.domain.base.usecase

import kotlinx.coroutines.CoroutineDispatcher
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Runnable
import platform.darwin.dispatch_async
import platform.darwin.dispatch_queue_t
import kotlin.coroutines.CoroutineContext

//data class IosDispatchersCoroutineContextProvider(
//    override val main: CoroutineContext = MainScope().coroutineContext,
//    override val io: CoroutineContext = BackgroundScope().coroutineContext
//) : CoroutineContextProvider
//
//class MainScope :
//    CoroutineScope {
//    override val coroutineContext: CoroutineContext = Dispatchers.Main
//}
//
//class BackgroundScope :
//    CoroutineScope {
//    override val coroutineContext: CoroutineContext = Dispatchers.Default
//}
//
//internal class NsQueueDispatcher(
//    private val dispatchQueue: dispatch_queue_t
//) : CoroutineDispatcher() {
//    override fun dispatch(context: CoroutineContext, block: Runnable) {
//        dispatch_async(dispatchQueue) {
//            block.run()
//        }
//    }
//}
