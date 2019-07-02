package org.camachoyury.core.domain.model


import kotlinx.serialization.Serializable
import org.camachoyury.core.domain.model.ForecastItem

@Serializable
data class HourlyWeather(var cod : String, var message: Double, var cnt: Int, var list: List<ForecastItem>, var city:City)