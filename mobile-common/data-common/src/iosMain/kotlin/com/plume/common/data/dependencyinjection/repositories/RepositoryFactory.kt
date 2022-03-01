package com.plume.common.data.dependencyinjection.repositories

import com.plume.common.data.datasources.UserRemoteDataSource
import com.plume.common.data.repository.UserRepository

class RepositoryFactory {
    val userRepository = UserRepository(
        userRemoteDataSource = makeUserRemoteDataSource()
    )

    private fun makeUserRemoteDataSource() = UserRemoteDataSource()
}