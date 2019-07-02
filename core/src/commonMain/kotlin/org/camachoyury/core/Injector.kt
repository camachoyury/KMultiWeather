package org.camachoyury.core

import org.camachoyury.core.data.repository.HourlyForecastRepositoryImpl
import org.camachoyury.core.domain.weather.CurrentWeatherRepository
import org.camachoyury.core.domain.weather.CurrentCurrentWeatherRepositoryImpl
import org.camachoyury.core.domain.weather.HourlyForecastRepository
import org.camachoyury.core.shared.Api
import org.camachoyury.core.shared.GetLocation
import kotlin.native.concurrent.ThreadLocal

@ThreadLocal
object Injector {

    val api : Api by lazy { return@lazy Api() }

    val weatherRepository: CurrentWeatherRepository by lazy { return@lazy  CurrentCurrentWeatherRepositoryImpl(api)}

    val hourlyForecastRepository: HourlyForecastRepository by lazy { return@lazy  HourlyForecastRepositoryImpl(api) }

    val getLocation: GetLocation by lazy { return@lazy  GetLocation() }

}