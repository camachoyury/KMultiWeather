package org.camachoyury.core.shared

import kotlinx.serialization.Serializable

@Serializable
data class Coord(
    var lon: Double,
    var lat: Double)

