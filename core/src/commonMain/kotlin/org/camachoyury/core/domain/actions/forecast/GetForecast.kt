package org.camachoyury.core.domain.actions

import org.camachoyury.core.Injector
import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.domain.model.KLocation

class GetForecast {

     fun  getForecastByName (city: String, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  hourlyForecastRepository = Injector.hourlyForecastRepository
        return hourlyForecastRepository.fetchCurrentWeatherHourlyByName(city, success, failure)
    }

     fun  getForecastByLocation(kLocation: KLocation, success: (HourlyWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  hourlyForecastRepository = Injector.hourlyForecastRepository
        return hourlyForecastRepository.fetchCurrentWeatherHourlyByLocation (kLocation, success, failure)

    }
}