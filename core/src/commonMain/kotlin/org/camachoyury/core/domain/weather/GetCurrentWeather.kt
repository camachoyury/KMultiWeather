package org.camachoyury.core.domain.weather

import org.camachoyury.core.Injector
import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.shared.CurrentWeather


class GetCurrentWeather {

    fun getCurrentWeatherByName (city: String, success: (CurrentWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  weatherRepository = Injector.weatherRepository
        return weatherRepository.getCurrentWeatherByName(city, success, failure)

    }

    fun getCurrentWeatherByLocation (kLocation: KLocation,success: (CurrentWeather) -> Unit, failure: (Throwable?) -> Unit) {

        var  weatherRepository = Injector.weatherRepository
        return weatherRepository.getCurrentWeatherByLocation(kLocation, success, failure)

    }

}