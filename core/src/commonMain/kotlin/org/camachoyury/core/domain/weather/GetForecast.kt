package org.camachoyury.core.domain.weather

import org.camachoyury.core.Injector
import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.domain.model.KLocation

class GetForecast {

    suspend fun  getForecastByName (city: String, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  hourlyForecastRepository = Injector.hourlyForecastRepository
        return hourlyForecastRepository.fetchCurrentWeatherHourlyByName(city, success, failure)

    }

    suspend fun  getForecastByLocation(kLocation: KLocation, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  hourlyForecastRepository = Injector.hourlyForecastRepository
        return hourlyForecastRepository.fetchCurrentWeatherHourlyByLocation (kLocation, success, failure)

    }
}