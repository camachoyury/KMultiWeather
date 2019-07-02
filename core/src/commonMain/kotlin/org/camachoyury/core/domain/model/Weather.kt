package org.camachoyury.core.shared
import kotlinx.serialization.Serializable

@Serializable
data class Weather(
    var id: Int,
    var main: String,
    var description: String,
    var icon: String)
