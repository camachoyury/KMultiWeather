package org.camachoyury.core.domain.weather

import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.shared.CurrentWeather

interface HourlyForecastRepository {

    suspend fun fetchCurrentWeatherHourlyByName(city :String, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit)

    suspend fun fetchCurrentWeatherHourlyByLocation(location: KLocation, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit)
}