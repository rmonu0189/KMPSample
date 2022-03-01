package com.plume.common.domain.model

data class UserRequestModel (
    val fullName: String,
    val email: String,
    val mobile: String,
    val password: String
)

data class UserResponseModel (
    val userId: Int,
    val fullName: String,
    val email: String,
    val mobile: String,
    val password: String
)