package com.plume.common.data.util

import android.util.Base64.NO_WRAP
import android.util.Base64.encodeToString
import kotlin.text.Charsets.UTF_8

class Base64Convertor : Base64Encoder {
    override fun encodeBase64(data: String): String =
        encodeToString(data.toByteArray(UTF_8), NO_WRAP)
}
