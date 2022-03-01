package com.plume.common.data.datasources

import com.plume.common.domain.model.UserRequestModel
import com.plume.common.domain.model.UserResponseModel

class UserRemoteDataSource {
    fun registerUser(userRequestModel: UserRequestModel): UserResponseModel {
        return UserResponseModel(
            userId = 1,
            fullName = userRequestModel.fullName,
            email = userRequestModel.email,
            mobile = userRequestModel.mobile,
            password = userRequestModel.password
        )
    }
}