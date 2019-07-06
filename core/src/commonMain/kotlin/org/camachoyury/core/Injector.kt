package org.camachoyury.core

import org.camachoyury.core.data.repository.ForecastRepositoryImpl
import org.camachoyury.core.domain.actions.CurrentWeatherRepository
import org.camachoyury.core.domain.actions.CurrentCurrentWeatherRepositoryImpl
import org.camachoyury.core.domain.actions.ForecastRepository
import org.camachoyury.core.shared.Api
import org.camachoyury.core.shared.GetLocation
import kotlin.native.concurrent.ThreadLocal

@ThreadLocal
object Injector {

    val api : Api by lazy { return@lazy Api() }

    val weatherRepository: CurrentWeatherRepository by lazy { return@lazy  CurrentCurrentWeatherRepositoryImpl(api)}

    val hourlyForecastRepository: ForecastRepository by lazy { return@lazy  ForecastRepositoryImpl(api) }

    val getLocation: GetLocation by lazy { return@lazy  GetLocation() }

}