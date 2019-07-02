package org.camachoyury.core.shared
import kotlinx.serialization.Serializable

@Serializable
data class Main( var temp: Double, var pressure: Int, var humidity: Int, var temp_min: Double, var temp_max: Double)
