package org.camachoyury.core.domain.actions

import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import org.camachoyury.core.ApplicationDispatcher
import org.camachoyury.core.domain.model.KLocation
import org.camachoyury.core.shared.Api
import org.camachoyury.core.shared.CurrentWeather


class CurrentCurrentWeatherRepositoryImpl(private val api: Api) : CurrentWeatherRepository {

    override fun getCurrentWeatherByLocation(
        location: KLocation,
        success: (CurrentWeather) -> Unit,
        failure: (Throwable?) -> Unit
    ) {
        GlobalScope.launch(ApplicationDispatcher) {
            try {
                api.fetchCurrentWeatherByLocation(location.lat, location.lng).also(success)
            } catch (ex: Exception) {
                failure(ex)
            }
        }
    }


    override fun getCurrentWeatherByName(
        city: String,
        success: (CurrentWeather) -> Unit,
        failure: (Throwable?) -> Unit
    ) {
        GlobalScope.launch(ApplicationDispatcher) {
            try {
                api.fetchCurrentWeatherByName(city).also(success)
            } catch (ex: Exception) {
                failure(ex)
            }
        }

    }


}