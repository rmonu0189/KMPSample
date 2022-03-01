package com.plume.common.data.storage.filestackstorage.mapper

import com.filestack.StorageOptions
import com.plume.common.domain.filestorage.model.FileMetaDataDomainModel
import org.junit.Assert.assertTrue
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.junit.runners.Parameterized
import org.junit.runners.Parameterized.Parameters

private const val SELECTED_FILE_PATH_1 = "path to selected file"
private const val SELECTED_FILE_NAME_1 = "selected file name"
private const val SELECTED_FILE_PATH_2 = "path to second selected file"
private const val SELECTED_FILE_NAME_2 = "second selected file name"
private const val MIME_TYPE_JPEG = "image/jpeg"
private const val MIME_TYPE_PNG = "image/png"

@RunWith(Parameterized::class)
class FileMetaDataDomainToFilestackStorageOptionsModelMapperTest(
    private val domainModel: FileMetaDataDomainModel,
    private val expectedResult: StorageOptions
) {

    companion object {
        @JvmStatic
        @Parameters(name = "Given file meta data {0} When toStorageOptions Then return storage options {1}")
        fun params() = listOf(
            arrayOf(
                FileMetaDataDomainModel(
                    path = SELECTED_FILE_PATH_1,
                    mimeType = MIME_TYPE_JPEG,
                    name = SELECTED_FILE_NAME_1
                ),
                StorageOptions.Builder()
                    .filename(SELECTED_FILE_NAME_1)
                    .mimeType(MIME_TYPE_JPEG)
                    .build()
            ),
            arrayOf(
                FileMetaDataDomainModel(
                    path = SELECTED_FILE_PATH_2,
                    mimeType = MIME_TYPE_PNG,
                    name = SELECTED_FILE_NAME_2
                ),
                StorageOptions.Builder()
                    .filename(SELECTED_FILE_NAME_2)
                    .mimeType(MIME_TYPE_PNG)
                    .build()
            )
        )
    }

    private lateinit var classUnderTest: FileMetaDataDomainToFilestackStorageOptionsModelMapper

    @Before
    fun setup() {
        classUnderTest = FileMetaDataDomainToFilestackStorageOptionsModelMapper()
    }

    @Test
    fun `Given domainModel When toStorageOptions Then returns storageOptions`() {
        // When
        val actualResult = classUnderTest.toStorageOptions(domainModel)

        // Then
        assertTrue(compareResult(actualResult))
    }

    private fun compareResult(actualResult: StorageOptions) =
        actualResult.filename == expectedResult.filename &&
            actualResult.mimeType == expectedResult.mimeType
}
