package org.camachoyury.multiweather

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProviders
import androidx.recyclerview.widget.LinearLayoutManager
import kotlinx.android.synthetic.main.activity_main.*
import org.camachoyury.core.domain.model.ForecastItem
import org.camachoyury.core.shared.CurrentWeather
import org.camachoyury.multiweather.Utils.formatDate


import kotlin.math.roundToInt


class MainActivity: AppCompatActivity() {
    lateinit var  viewModel: ForecastViewModel
    lateinit var forecastAdapter: ForecastAdapter


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

         viewModel = ViewModelProviders.of(this, Injector.provideViewModelFactory()).get(ForecastViewModel::class.java)
        viewModel.getCurrentWeather("Buenos Aires")
        viewModel.getForecastByLocation("Buenos Aires")
        updateCurrentWeather()



        forecastAdapter = ForecastAdapter()

        forecastList.setHasFixedSize(true);
        val layoutManager = LinearLayoutManager(this)
        layoutManager.scrollToPosition(1)

        forecastList.apply {
            setHasFixedSize(true)
            forecastList.layoutManager = layoutManager
            adapter = forecastAdapter
        }

        viewModel.forecastList.observe(this,
            Observer<List<ForecastItem>> { forecast ->
                if (forecast != null) {
                    forecastAdapter.setForecastList(forecast)

                }
            })



    }

    private fun updateCurrentWeather(){

        viewModel.weather.observe(this, Observer {t -> updateCurrentWeather(t) })
    }

    private fun updateCurrentWeather(  currentWeather: CurrentWeather){

        tvCurrentDate.text = formatDate(currentWeather.dt)
        tvCurrentTemperature.text = currentWeather.main.temp.roundToInt().toString() + " °C"
        tvCurrentDescription.text = currentWeather.weather.first().main
        tvCurrentMinTemp.text = currentWeather.main.temp_min.roundToInt().toString() + " °C"
        ivCurrentIconWeather.setImageResource(Utils.getArtResourceForWeatherCondition(currentWeather.weather.first().id))
    }






}
