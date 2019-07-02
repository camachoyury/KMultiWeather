package org.camachoyury.core.shared

import kotlinx.serialization.Serializable

@Serializable
data class CurrentWeather(
    var coord: Coord = Coord(0.0,0.0),
    var weather: List<Weather>,
    var base: String = "",
    var main: Main,
    var visibility: Int = 0,
    var wind: Wind,
    var clouds: Clouds,
    var dt: Long,
    var sys: Sys,
    var id: Int = 0,
    var name: String = "",
    var cod: Int = 0,
    var dt_txt: String= "")

