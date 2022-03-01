package com.plume.common.data.storage.filestackstorage.mapper

import com.filestack.StorageOptions
import com.plume.common.domain.filestorage.model.FileMetaDataDomainModel

class FileMetaDataDomainToFilestackStorageOptionsModelMapper {
    fun toStorageOptions(input: FileMetaDataDomainModel) = StorageOptions.Builder()
        .filename(input.name)
        .mimeType(input.mimeType)
        .build()
}
