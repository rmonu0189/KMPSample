package com.plume.common.data.storage.filestackstorage

import com.filestack.Client
import com.plume.common.data.storage.filestackstorage.mapper.FileMetaDataDomainToFilestackStorageOptionsModelMapper
import com.plume.common.domain.base.model.exception.UnknownDomainException
import com.plume.common.domain.exception.NoInternetConnectionDomainException
import com.plume.common.domain.filestorage.model.FileMetaDataDomainModel
import com.plume.common.domain.filestorage.repository.FileStorageRepository
import java.net.UnknownHostException

private const val FILESTACK_FILE_DOWNLOAD_URL =
    "https://www.filestackapi.com/api/file/%s?policy=%s&signature=%s"

class FilestackStorageDataRepository(
    private val client: Client,
    private val fileMetaDataToStorageOptionsMapper: FileMetaDataDomainToFilestackStorageOptionsModelMapper
) : FileStorageRepository {

    override suspend fun uploadFile(
        fileMetaDataDomainModel: FileMetaDataDomainModel,
    ): String {
        val options = fileMetaDataToStorageOptionsMapper.toStorageOptions(fileMetaDataDomainModel)
        return try {
            client.upload(fileMetaDataDomainModel.path, false, options).handle
        } catch (runtimeException: RuntimeException) {
            throw if (runtimeException.cause is UnknownHostException) {
                NoInternetConnectionDomainException(runtimeException)
            } else {
                UnknownDomainException(runtimeException)
            }
        }
    }

    override fun fileUrl(fileId: String) = FILESTACK_FILE_DOWNLOAD_URL.format(
        fileId,
        client.config.policy,
        client.config.signature
    )
}
