package org.camachoyury.core.shared

import kotlinx.serialization.Serializable

@Serializable
class Sys(var type: Int,var id: Int,var message: Double, var country: String, var sunrise: Int, var sunset: Int)

