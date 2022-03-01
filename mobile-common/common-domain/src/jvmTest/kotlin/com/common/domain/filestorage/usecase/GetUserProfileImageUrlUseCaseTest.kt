package com.common.domain.filestorage.usecase

import com.nhaarman.mockitokotlin2.given
import com.plume.common.domain.base.usecase.CoroutineContextProvider
import com.plume.common.domain.filestorage.repository.FileStorageRepository
import com.plume.common.domain.filestorage.usecase.GetUserProfileImageUrlUseCase
import com.plume.test.domain.coroutine.fakeCoroutineScope
import kotlinx.coroutines.runBlocking
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.mockito.Mock
import org.mockito.junit.MockitoJUnitRunner
import kotlin.test.assertEquals

@RunWith(MockitoJUnitRunner::class)
class GetUserProfileImageUrlUseCaseTest {
    private lateinit var classUnderTest: GetUserProfileImageUrlUseCase

    @Mock
    private lateinit var fileStorageRepository: FileStorageRepository

    @Mock
    private lateinit var coroutineContextProvider: CoroutineContextProvider

    @Before
    fun setUp() {
        classUnderTest = GetUserProfileImageUrlUseCase(
            fileStorageRepository,
            coroutineContextProvider
        )
    }

    @Test
    fun `Given file id when executeInBackground then returns expected file url`() {
        runBlocking {
            val fileId = "test_file_id"
            val expectedResult = "test_file_url"
            // Given
            given(fileStorageRepository.fileUrl(fileId)).willReturn(expectedResult)

            // When
            val actualResult = classUnderTest.executeInBackground(fileId, fakeCoroutineScope)

            // Then
            assertEquals(expectedResult, actualResult)
        }
    }
}
