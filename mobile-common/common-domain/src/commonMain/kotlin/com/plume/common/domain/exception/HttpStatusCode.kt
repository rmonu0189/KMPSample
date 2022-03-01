package com.plume.common.domain.exception

sealed class HttpStatusCode {
    companion object {
        fun identify(statusCode: Int): HttpStatusCode {
            return when (statusCode) {
                200 -> Ok
                401 -> Unauthorized
                500 -> InternalServerError
                else -> Undefined(statusCode)
            }
        }
    }

    object Unauthorized : HttpStatusCode()
    object Ok : HttpStatusCode()
    object InternalServerError : HttpStatusCode()
    class Undefined(val statusCode: Int) : HttpStatusCode()
}
