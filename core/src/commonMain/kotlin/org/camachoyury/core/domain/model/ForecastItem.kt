package org.camachoyury.core.domain.model

import kotlinx.serialization.Serializable
import org.camachoyury.core.shared.Coord
import org.camachoyury.core.shared.Weather

@Serializable
data class ForecastItem(var coord: Coord = Coord(0.0,0.0),
                   var temp: Temp,
                   var weather: List<Weather>,
                   var speed: Double = 0.0,
                   var humidity: Int = 1,
                   var clouds: Int = 1,
                   var rain: Double = 0.0,
                   var dt: Long = 1L,
                   var pressure: Double = 0.0,
                   var deg: Int = 0
                   ) {
}