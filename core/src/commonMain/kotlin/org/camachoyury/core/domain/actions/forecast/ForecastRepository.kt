package org.camachoyury.core.domain.actions

import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.domain.model.KLocation

interface ForecastRepository {

     fun fetchCurrentWeatherHourlyByName(city :String, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit)

     fun fetchCurrentWeatherHourlyByLocation(location: KLocation, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit)
}