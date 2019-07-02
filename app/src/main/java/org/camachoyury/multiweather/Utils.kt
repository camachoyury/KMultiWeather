package org.camachoyury.multiweather

import java.text.DateFormat
import java.text.SimpleDateFormat
import java.util.*


object Utils {


    /**
     * Helper method to provide the icon resource id according to the weather condition id returned
     * by the OpenWeatherMap call.
     * @param weatherId from OpenWeatherMap API response
     * @return resource id for the corresponding icon. -1 if no relation is found.
     */
    fun getIconResourceForWeatherCondition(weatherId: Int): Int {
        // Based on weather code data found at:
        // http://bugs.openweathermap.org/projects/api/wiki/Weather_Condition_Codes
        if (weatherId >= 200 && weatherId <= 232) {
            return R.drawable.ic_storm
        } else if (weatherId >= 300 && weatherId <= 321) {
            return R.drawable.ic_light_rain
        } else if (weatherId >= 500 && weatherId <= 504) {
            return R.drawable.ic_rain
        } else if (weatherId == 511) {
            return R.drawable.ic_snow
        } else if (weatherId >= 520 && weatherId <= 531) {
            return R.drawable.ic_rain
        } else if (weatherId >= 600 && weatherId <= 622) {
            return R.drawable.ic_snow
        } else if (weatherId >= 701 && weatherId <= 761) {
            return R.drawable.ic_fog
        } else if (weatherId == 761 || weatherId == 781) {
            return R.drawable.ic_storm
        } else if (weatherId == 800) {
            return R.drawable.ic_clear
        } else if (weatherId == 801) {
            return R.drawable.ic_light_clouds
        } else if (weatherId >= 802 && weatherId <= 804) {
            return R.drawable.ic_cloudy
        }
        return -1
    }

    /**
     * Helper method to provide the art resource id according to the weather condition id returned
     * by the OpenWeatherMap call.
     * @param weatherId from OpenWeatherMap API response
     * @return resource id for the corresponding icon. -1 if no relation is found.
     */
    fun getArtResourceForWeatherCondition(weatherId: Int): Int {
        // Based on weather code data found at:
        // http://bugs.openweathermap.org/projects/api/wiki/Weather_Condition_Codes
        if (weatherId >= 200 && weatherId <= 232) {
            return R.drawable.art_storm
        } else if (weatherId >= 300 && weatherId <= 321) {
            return R.drawable.art_light_rain
        } else if (weatherId >= 500 && weatherId <= 504) {
            return R.drawable.art_rain
        } else if (weatherId == 511) {
            return R.drawable.art_snow
        } else if (weatherId >= 520 && weatherId <= 531) {
            return R.drawable.art_rain
        } else if (weatherId >= 600 && weatherId <= 622) {
            return R.drawable.art_snow
        } else if (weatherId >= 701 && weatherId <= 761) {
            return R.drawable.art_fog
        } else if (weatherId == 761 || weatherId == 781) {
            return R.drawable.art_storm
        } else if (weatherId == 800) {
            return R.drawable.art_clear
        } else if (weatherId == 801) {
            return R.drawable.art_light_clouds
        } else if (weatherId >= 802 && weatherId <= 804) {
            return R.drawable.art_clouds
        }
        return -1
    }
    val DATE_FORMAT = "yyyyMMdd"

    fun formatDate(dateInMilliseconds: Long): String {
        val date = Date(dateInMilliseconds)
        return DateFormat.getDateInstance().format(date)
    }

    fun formatDateDay(dateInMilliseconds: Long): String {
        val sdf = SimpleDateFormat("EEE")

        val date = Date(dateInMilliseconds)
        return sdf.format(date)
    }
}