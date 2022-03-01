package com.plume.common.data.storage

import com.google.firebase.storage.StorageReference
import kotlin.coroutines.resume
import kotlin.coroutines.resumeWithException
import kotlin.coroutines.suspendCoroutine

class PlatformCloudStorageAccessor(
    private val storageReference: StorageReference
) : CloudStorageAccessor {

    override suspend fun getFileUriString(storageReferencePath: StorageReferencePath) =
        getFileUrl(storageReference.child(storageReferencePath.getPath()))

    private suspend fun getFileUrl(storageReference: StorageReference): String =
        suspendCoroutine { continuation ->
            storageReference.downloadUrl
                .addOnSuccessListener { url ->
                    continuation.resume(url.toString())
                }
                .addOnFailureListener(continuation::resumeWithException)
        }
}
