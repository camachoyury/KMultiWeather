package org.camachoyury.multiweather

import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import kotlinx.coroutines.*
import org.camachoyury.core.domain.model.ForecastItem
import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.domain.weather.GetCurrentWeather
import org.camachoyury.core.domain.weather.GetForecast
import org.camachoyury.core.shared.CurrentWeather
import kotlin.coroutines.CoroutineContext

class ForecastViewModel(private val currentWeather: GetCurrentWeather, private val forecast: GetForecast): ViewModel(), CoroutineScope {

    private val job = Job()
    override val coroutineContext: CoroutineContext
        get() = job + Dispatchers.Main


    var weather = MutableLiveData<CurrentWeather>()
     var forecastList = MutableLiveData<List<ForecastItem>>()
    var error = MutableLiveData<Throwable>()

    fun getCurrentWeather(city: String ) {
        launch(Dispatchers.Main) {
            withContext(Dispatchers.IO) {
                currentWeather.getCurrentWeatherByName(city,
                    success = {   weather.postValue(it)},
                    failure = ::handleError
                )
            }
        }
    }


    fun getCurrentWeatherByLocation() {
        launch(Dispatchers.Main) {
            withContext(Dispatchers.IO) {
                currentWeather.getCurrentWeatherByLocation(
                    KLocation(0.0,0.0),
                    success = {   weather.postValue(it) },
                    failure = ::handleError
                )
            }
        }
    }


    fun getForecastByLocation(city: String) {
        launch(Dispatchers.Main) {
            withContext(Dispatchers.IO) {
                forecast.getForecastByName(city,
                    success = {   forecastList.postValue(it.list) },
                    failure = ::handleError
                )
            }
        }
    }

    private fun handleError(ex: Throwable?) {
        if (ex != null) {
            ex.printStackTrace()
            error.postValue(ex)
        }
    }

}