package org.camachoyury.multiweather

import org.camachoyury.core.domain.actions.GetCurrentWeather
import org.camachoyury.core.domain.actions.GetForecast

object Injector {
    fun provideViewModelFactory(): ViewModelFactory{
        return  ViewModelFactory(GetCurrentWeather(), GetForecast())
    }
}