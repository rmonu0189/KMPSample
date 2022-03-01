package com.plume.common.data.storage.filestackstorage

import com.filestack.Client
import com.filestack.Config
import com.filestack.FileLink
import com.filestack.StorageOptions
import com.nhaarman.mockitokotlin2.doReturn
import com.nhaarman.mockitokotlin2.doThrow
import com.nhaarman.mockitokotlin2.given
import com.nhaarman.mockitokotlin2.mock
import com.plume.common.data.storage.filestackstorage.mapper.FileMetaDataDomainToFilestackStorageOptionsModelMapper
import com.plume.common.domain.base.model.exception.UnknownDomainException
import com.plume.common.domain.exception.NoInternetConnectionDomainException
import com.plume.common.domain.filestorage.model.FileMetaDataDomainModel
import kotlinx.coroutines.runBlocking
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.mockito.Mock
import org.mockito.junit.MockitoJUnitRunner
import java.lang.IllegalStateException
import java.net.UnknownHostException
import kotlin.test.assertEquals

private const val FILESTACK_FILE_DOWNLOAD_URL =
    "https://www.filestackapi.com/api/file/%s?policy=%s&signature=%s"
private const val SELECTED_FILE_PATH = "path to second selected file"
private const val SELECTED_FILE_NAME = "second selected file name"
private const val MIME_TYPE_PNG = "image/png"
private const val FILESTACK_API_KEY = "filestack_api_key"
private const val FILESTACK_ENCODED_POLICY = "filestack_policy"
private const val FILESTACK_SIGNATURE = "filestack_signature"

@RunWith(MockitoJUnitRunner::class)
class FilestackStorageDataRepositoryTest {
    private lateinit var classUnderTest: FilestackStorageDataRepository

    @Mock
    private lateinit var client: Client

    @Mock
    private lateinit var fileMetaDataToStorageOptionsMapper: FileMetaDataDomainToFilestackStorageOptionsModelMapper

    private val fileMetaData = FileMetaDataDomainModel(
        path = SELECTED_FILE_PATH,
        mimeType = MIME_TYPE_PNG,
        name = SELECTED_FILE_NAME
    )
    private val storageOption = StorageOptions.Builder()
        .filename(SELECTED_FILE_NAME)
        .mimeType(MIME_TYPE_PNG)
        .build()

    private val fileStackClientConfig = Config(
        FILESTACK_API_KEY,
        FILESTACK_ENCODED_POLICY,
        FILESTACK_SIGNATURE
    )

    @Before
    fun setup() {
        classUnderTest = FilestackStorageDataRepository(
            client = client,
            fileMetaDataToStorageOptionsMapper = fileMetaDataToStorageOptionsMapper
        )
    }

    @Test
    fun `Given fileMetaData, storageOptions when uploadFile then returns URL to uploaded file`(): Unit =
        runBlocking {
            // Given
            given(fileMetaDataToStorageOptionsMapper.toStorageOptions(fileMetaData))
                .willReturn(storageOption)
            val expectedUrl = "https://uploaded.here/SOME_HASH"
            val fileLink = mock<FileLink> {
                on { handle } doReturn expectedUrl
            }
            given(client.upload(SELECTED_FILE_PATH, false, storageOption))
                .willReturn(fileLink)

            // When
            val actualUrl = classUnderTest.uploadFile(fileMetaData)

            // Then
            assertEquals(expectedUrl, actualUrl)
        }

    @Test(expected = NoInternetConnectionDomainException::class)
    fun `Given no network when uploadFile then throws NoInternetConnectionDomainException`(): Unit =
        runBlocking {
            // Given
            given(fileMetaDataToStorageOptionsMapper.toStorageOptions(fileMetaData))
                .willReturn(storageOption)
            val fileLink = mock<FileLink> {
                on { handle } doThrow RuntimeException(UnknownHostException())
            }
            given(client.upload(SELECTED_FILE_PATH, false, storageOption))
                .willReturn(fileLink)

            // When
            classUnderTest.uploadFile(fileMetaData)

            // Then throws NoInternetConnectionDomainException
        }

    @Test(expected = UnknownDomainException::class)
    fun `Given unknown failure when uploadFile then throws UnknownDomainException`(): Unit =
        runBlocking {
            // Given
            given(fileMetaDataToStorageOptionsMapper.toStorageOptions(fileMetaData))
                .willReturn(storageOption)
            val fileLink = mock<FileLink> {
                on { handle } doThrow IllegalStateException()
            }
            given(client.upload(SELECTED_FILE_PATH, false, storageOption))
                .willReturn(fileLink)

            // When
            classUnderTest.uploadFile(fileMetaData)

            // Then throws UnknownDomainException
        }

    @Test
    fun `Given fileId When fileUrl Then return file download url`() {
        // Given
        val fileId = "test_file_Id"
        val expectedResult = FILESTACK_FILE_DOWNLOAD_URL.format(
            fileId,
            FILESTACK_ENCODED_POLICY,
            FILESTACK_SIGNATURE
        )
        given(client.config).willReturn(fileStackClientConfig)

        // When
        val actualResult = classUnderTest.fileUrl(fileId)

        // Then
        assertEquals(expectedResult, actualResult)
    }
}
