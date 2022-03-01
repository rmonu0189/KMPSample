package com.plume.common.data.locale

import com.plume.common.data.locale.mapper.LanguageCodeToLanguageDataModelMapper
import java.util.Locale

class LocalePropertiesDataProvider(
    private val languageCodeToLanguageDataModelMapper: LanguageCodeToLanguageDataModelMapper
) : LocalePropertiesProvider {

    override fun language() =
        languageCodeToLanguageDataModelMapper.toLanguage(Locale.getDefault().language)
}
