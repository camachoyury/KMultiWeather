package org.camachoyury.core.shared

import io.ktor.client.HttpClient
import io.ktor.client.request.get
import kotlinx.serialization.json.Json
import org.camachoyury.core.domain.model.HourlyWeather
import org.camachoyury.core.shared.Constants.APP_ID
import org.camachoyury.core.shared.Constants.BASE_URL
import org.camachoyury.core.shared.Constants.DAILY
import org.camachoyury.core.shared.Constants.FORECAST
import org.camachoyury.core.shared.Constants.HOURLY
import org.camachoyury.core.shared.Constants.LATITUDE
import org.camachoyury.core.shared.Constants.LONGITUDE
import org.camachoyury.core.shared.Constants.QUERY
import org.camachoyury.core.shared.Constants.UNITS
import org.camachoyury.core.shared.Constants.WEATHER

class Api {

//    private val client by lazy { return@lazy HttpClient() }
    private val client by lazy {
                HttpClient {
//            install(Logging) {
//                logger = Logger.DEFAULT
//                level = LogLevel.BODY
//
//            }
        }
    }
    @UseExperimental(kotlinx.serialization.UnstableDefault::class)
    suspend fun fetchCurrentWeatherByName(city: String):CurrentWeather {

        val url = BASE_URL +  WEATHER + QUERY + city + APP_ID + UNITS
        print("URL $url")
        val json = client.get<String>(url)
        return Json.nonstrict.parse(CurrentWeather.serializer(), json)

    }


    @UseExperimental(kotlinx.serialization.UnstableDefault::class)
    suspend fun fetchCurrentWeatherByLocation(lat: Double, lng: Double ):CurrentWeather {

        val url = BASE_URL +  WEATHER + LATITUDE + lat + LONGITUDE+ lng + APP_ID + UNITS
        print("URL $url")
        val json = client.get<String>(url)
        return Json.nonstrict.parse(CurrentWeather.serializer(), json)

    }

    @UseExperimental(kotlinx.serialization.UnstableDefault::class)
    suspend fun fetchCurrentWeatherHourlyByName(city: String): HourlyWeather {

        val url = BASE_URL + FORECAST +  DAILY  + QUERY + city + APP_ID + UNITS
        print("URL $url")
        val json = client.get<String>(url)
        return Json.nonstrict.parse(HourlyWeather.serializer(), json)

    }

    @UseExperimental(kotlinx.serialization.UnstableDefault::class)
    suspend fun fetchCurrentWeatherHourlyByLocation(lat: Double, lng: Double ): HourlyWeather {

        val url = BASE_URL + FORECAST +  DAILY + LATITUDE + lat + LONGITUDE+ lng + APP_ID + UNITS
        print("URL $url")
        val json = client.get<String>(url)
        return Json.nonstrict.parse(HourlyWeather.serializer(), json)

    }


}