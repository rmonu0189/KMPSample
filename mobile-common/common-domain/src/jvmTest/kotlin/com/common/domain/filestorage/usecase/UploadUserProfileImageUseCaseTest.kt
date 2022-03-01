package com.common.domain.filestorage.usecase

import com.nhaarman.mockitokotlin2.given
import com.nhaarman.mockitokotlin2.verify
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.filestorage.model.FileMetaDataDomainModel
import com.plume.common.domain.filestorage.repository.FileStorageRepository
import com.plume.common.domain.filestorage.usecase.UploadUserProfileImageUseCase
import com.plume.test.domain.coroutine.fakeCoroutineScope
import kotlinx.coroutines.runBlocking
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.rules.MethodRule
import org.junit.runner.RunWith
import org.junit.runners.Parameterized
import org.junit.runners.Parameterized.Parameters
import org.mockito.Mock
import org.mockito.junit.MockitoJUnit

private const val SELECTED_FILE_PATH = "Selected File Test Path"
private const val SELECTED_FILE_NAME = "Selected File Test Name"
private const val FILE_STACK_FILE_URL = "uploaded file URL"
private const val FILE_STACK_JPEG_FILE_URL = "uploaded jpeg file URL"

@RunWith(Parameterized::class)
class UploadUserProfileImageUseCaseTest(
    private val fileMetaDataDomainModel: FileMetaDataDomainModel,
    private val expectedResult: String
) {

    companion object {

        @JvmStatic
        @Parameters(name = "Given {0} When executeInBackground then returns {1}")
        fun parameters() = listOf(
            arrayOf(
                FileMetaDataDomainModel(
                    path = SELECTED_FILE_PATH,
                    mimeType = "PNG",
                    name = SELECTED_FILE_NAME
                ),
                FILE_STACK_FILE_URL
            ),
            arrayOf(
                FileMetaDataDomainModel(
                    path = SELECTED_FILE_PATH,
                    mimeType = "JPEG",
                    name = SELECTED_FILE_NAME
                ),
                FILE_STACK_JPEG_FILE_URL
            )
        )
    }

    private lateinit var classUnderTest: UploadUserProfileImageUseCase

    @Mock
    private lateinit var fileStorageRepository: FileStorageRepository

    @Mock
    private lateinit var coroutineContextProvider: CoroutineContextProvider

    @get:Rule
    val mockitoRules: MethodRule = MockitoJUnit.rule()

    @Before
    fun setUp() {
        classUnderTest = UploadUserProfileImageUseCase(
            fileStorageRepository,
            coroutineContextProvider
        )
    }

    @Test
    fun `Given fileMetaDataDomainModel when executeInBackground then verify correct method call`() {

        val coroutineScope = fakeCoroutineScope

        runBlocking {
            // Given
            given(fileStorageRepository.uploadFile(fileMetaDataDomainModel))
                .willReturn(expectedResult)
            // When
            classUnderTest.executeInBackground(fileMetaDataDomainModel, coroutineScope)
            // Then
            verify(fileStorageRepository).uploadFile(fileMetaDataDomainModel)
        }
    }
}
