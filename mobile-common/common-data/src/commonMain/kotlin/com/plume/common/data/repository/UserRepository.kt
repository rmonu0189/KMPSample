package com.plume.common.data.repository

import com.plume.common.data.datasources.UserRemoteDataSource
import com.plume.common.domain.`interface`.UserRepositoryInterface
import com.plume.common.domain.model.UserRequestModel
import com.plume.common.domain.model.UserResponseModel

class UserRepository(
    private val userRemoteDataSource: UserRemoteDataSource
): UserRepositoryInterface {
    override suspend fun register(
        userRequestModel: UserRequestModel
    ): UserResponseModel = userRemoteDataSource.registerUser(userRequestModel)
}