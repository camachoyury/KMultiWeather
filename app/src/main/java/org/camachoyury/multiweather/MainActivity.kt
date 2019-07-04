package org.camachoyury.multiweather

import android.Manifest
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProviders
import androidx.recyclerview.widget.LinearLayoutManager
import kotlinx.android.synthetic.main.activity_main.*
import org.camachoyury.core.domain.model.ForecastItem
import org.camachoyury.core.shared.CurrentWeather
import org.camachoyury.multiweather.Utils.formatDate
import pub.devrel.easypermissions.EasyPermissions


import kotlin.math.roundToInt






class MainActivity: AppCompatActivity(), EasyPermissions.PermissionCallbacks {

    lateinit var  viewModel: ForecastViewModel
    lateinit var forecastAdapter: ForecastAdapter
    private val CAMERA_REQUEST_CODE = 100


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

         viewModel = ViewModelProviders.of(this, Injector.provideViewModelFactory()).get(ForecastViewModel::class.java)
        viewModel.getCurrentWeather("Buenos Aires")
        viewModel.getForecastByLocation("Buenos Aires")
        updateCurrentWeather()

        validatePermsssions()

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

        tvCurrentDate.text = formatDate(currentWeather.dt  * 1000)
        tvCurrentTemperature.text = currentWeather.main.temp.roundToInt().toString() + " °C"
        tvCurrentDescription.text = currentWeather.weather.first().main
        tvCurrentMinTemp.text = currentWeather.main.temp_min.roundToInt().toString() + " °C"
        ivCurrentIconWeather.setImageResource(Utils.getArtResourceForWeatherCondition(currentWeather.weather.first().id))
    }




    fun validatePermsssions(){

        if (EasyPermissions.hasPermissions(this, Manifest.permission.ACCESS_FINE_LOCATION)) {


        } else {
            EasyPermissions.requestPermissions(
                this,
                getString(R.string.rationale_location),
                CAMERA_REQUEST_CODE,
                Manifest.permission.ACCESS_FINE_LOCATION
            )
        }
    }


    override fun onRequestPermissionsResult(requestCode: Int, permissions: Array<String>, grantResults: IntArray) {
        super.onRequestPermissionsResult(requestCode, permissions, grantResults)
        EasyPermissions.onRequestPermissionsResult(requestCode, permissions, grantResults, this@MainActivity)
    }


    override fun onPermissionsDenied(requestCode: Int, perms: MutableList<String>) {
        Log.d("HOLA", "Permission has been granted");

    }

    override fun onPermissionsGranted(requestCode: Int, perms: MutableList<String>) {
        Log.d("HOLA", "Permission has been granted");

    }




}
