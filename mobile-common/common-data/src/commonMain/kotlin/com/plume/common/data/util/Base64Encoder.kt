package com.plume.common.data.util

// Todo Should be revised with https://jira.plume.tech/browse/MOBY-14805
interface Base64Encoder {
    fun encodeBase64(data: String): String
}
