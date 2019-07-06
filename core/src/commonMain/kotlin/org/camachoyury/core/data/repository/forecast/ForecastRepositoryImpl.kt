package org.camachoyury.core.data.repository

import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import org.camachoyury.core.ApplicationDispatcher
import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.domain.actions.ForecastRepository
import org.camachoyury.core.shared.Api

class ForecastRepositoryImpl(private val api: Api): ForecastRepository{
    override  fun fetchCurrentWeatherHourlyByName(
        city: String,
        success: (HourlyWeather) -> Unit,
        failure: (Throwable?) -> Unit
    ) {
        GlobalScope.launch(ApplicationDispatcher) {
            try {
                api.fetchCurrentWeatherHourlyByName(city).also(success)
            } catch (ex: Exception) {
                failure(ex)
            }
        }
    }

    override  fun fetchCurrentWeatherHourlyByLocation(
        location: KLocation,
        success: (HourlyWeather) -> Unit,
        failure: (Throwable?) -> Unit
    ) {
        GlobalScope.launch(ApplicationDispatcher) {
            try {
                api.fetchCurrentWeatherHourlyByLocation(location.lat, location.lng).also(success)
            } catch (ex: Exception) {
                failure(ex)
            }
        }
    }

}