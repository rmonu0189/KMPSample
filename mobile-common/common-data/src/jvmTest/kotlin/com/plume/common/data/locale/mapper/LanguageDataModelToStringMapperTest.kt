package com.plume.common.data.locale.mapper

import com.plume.common.data.locale.model.LanguageDataModel
import com.plume.common.data.locale.model.LanguageDataModel.English
import com.plume.common.data.locale.model.LanguageDataModel.French
import com.plume.common.data.locale.model.LanguageDataModel.German
import com.plume.common.data.locale.model.LanguageDataModel.Italian
import com.plume.common.data.locale.model.LanguageDataModel.Japanese
import com.plume.common.data.locale.model.LanguageDataModel.Korean
import com.plume.common.data.locale.model.LanguageDataModel.Portuguese
import com.plume.common.data.locale.model.LanguageDataModel.Spanish
import junit.framework.Assert.assertEquals
import org.junit.Before
import org.junit.Test
import org.junit.runner.RunWith
import org.junit.runners.Parameterized
import org.junit.runners.Parameterized.Parameters

@RunWith(Parameterized::class)
class LanguageDataModelToStringMapperTest(
    private val input: LanguageDataModel,
    private val expectedOutput: String
) {
    companion object {
        @JvmStatic
        @Parameters
        fun getParameters() = listOf(
            arrayOf(English, "en"),
            arrayOf(French, "fr"),
            arrayOf(German, "de"),
            arrayOf(Italian, "it"),
            arrayOf(Japanese, "ja"),
            arrayOf(Korean, "ko"),
            arrayOf(Portuguese, "pt"),
            arrayOf(Spanish, "es")
        )
    }

    private lateinit var classUnderTest: LanguageDataModelToStringMapper

    @Before
    fun setUp() {
        classUnderTest = LanguageDataModelToStringMapper()
    }

    @Test
    fun `Given input When toString Then returns expectedOutput`() {

        // When
        val actualOutput = classUnderTest.toString(input)

        // Then
        assertEquals(expectedOutput, actualOutput)
    }
}
