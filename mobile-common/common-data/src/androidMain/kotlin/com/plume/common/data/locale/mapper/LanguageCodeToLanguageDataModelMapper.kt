package com.plume.common.data.locale.mapper

import com.plume.common.data.locale.model.LanguageDataModel.English
import com.plume.common.data.locale.model.LanguageDataModel.French
import com.plume.common.data.locale.model.LanguageDataModel.German
import com.plume.common.data.locale.model.LanguageDataModel.Italian
import com.plume.common.data.locale.model.LanguageDataModel.Japanese
import com.plume.common.data.locale.model.LanguageDataModel.Korean
import com.plume.common.data.locale.model.LanguageDataModel.Portuguese
import com.plume.common.data.locale.model.LanguageDataModel.Spanish

class LanguageCodeToLanguageDataModelMapper {

    fun toLanguage(languageCode: String) = when (languageCode) {
        "en" -> English
        "fr" -> French
        "de" -> German
        "it" -> Italian
        "ja" -> Japanese
        "ko" -> Korean
        "pt" -> Portuguese
        "es" -> Spanish
        else -> English
    }
}
