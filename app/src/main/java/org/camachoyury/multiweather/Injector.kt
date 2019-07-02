package org.camachoyury.multiweather

import org.camachoyury.core.domain.weather.GetCurrentWeather
import org.camachoyury.core.domain.weather.GetForecast

object Injector {
    fun provideViewModelFactory(): ViewModelFactory{
        return  ViewModelFactory(GetCurrentWeather(), GetForecast())
    }
}