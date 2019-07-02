package org.camachoyury.multiweather

import androidx.lifecycle.ViewModel
import androidx.lifecycle.ViewModelProvider
import org.camachoyury.core.domain.weather.GetCurrentWeather
import org.camachoyury.core.domain.weather.GetForecast

@Suppress("UNCHECKED_CAST")
class ViewModelFactory(private val getCurrentWeather: GetCurrentWeather, private val forecast: GetForecast):ViewModelProvider.NewInstanceFactory() {

    override fun <T : ViewModel?> create(modelClass: Class<T>): T {
        return  ForecastViewModel(getCurrentWeather,forecast) as T
    }
}