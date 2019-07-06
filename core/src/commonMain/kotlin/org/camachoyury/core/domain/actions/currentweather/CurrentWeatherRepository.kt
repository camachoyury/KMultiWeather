package org.camachoyury.core.domain.actions

import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.shared.CurrentWeather


interface CurrentWeatherRepository {


    fun getCurrentWeatherByName(city :String, success: (CurrentWeather) -> Unit, failure: (Throwable?) -> Unit)

    fun getCurrentWeatherByLocation(location: KLocation, success: (CurrentWeather) -> Unit, failure: (Throwable?) -> Unit)
}