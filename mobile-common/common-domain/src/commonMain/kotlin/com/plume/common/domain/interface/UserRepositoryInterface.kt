package com.plume.common.domain.`interface`

import com.plume.common.domain.model.UserRequestModel
import com.plume.common.domain.model.UserResponseModel

interface UserRepositoryInterface {
    suspend fun register(userRequestModel: UserRequestModel): UserResponseModel
}