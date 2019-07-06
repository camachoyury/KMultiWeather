package org.camachoyury.multiweather

import android.Manifest
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.widget.SearchView
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProviders
import androidx.recyclerview.widget.LinearLayoutManager
import com.google.android.gms.location.FusedLocationProviderClient
import com.google.android.gms.location.LocationServices
import kotlinx.android.synthetic.main.activity_main.*
import org.camachoyury.core.domain.model.ForecastItem
import org.camachoyury.core.shared.CurrentWeather
import org.camachoyury.multiweather.Utils.formatDate
import pub.devrel.easypermissions.EasyPermissions
import kotlin.math.roundToInt
import com.google.android.gms.tasks.OnSuccessListener
import org.camachoyury.core.domain.model.KLocation


class MainActivity: AppCompatActivity(), EasyPermissions.PermissionCallbacks {

    lateinit var  viewModel: ForecastViewModel
    lateinit var forecastAdapter: ForecastAdapter
    private val CAMERA_REQUEST_CODE = 100

    lateinit var fusedLocationClient: FusedLocationProviderClient

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

         viewModel = ViewModelProviders.of(this, Injector.provideViewModelFactory()).get(ForecastViewModel::class.java)
        viewModel.getCurrentWeather("Buenos Aires")
        viewModel.getForecastByLocation("Buenos Aires")
        updateCurrentWeather()

        validatePermsssions()
        fusedLocationClient = LocationServices.getFusedLocationProviderClient(this);


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



        cityName.setOnQueryTextListener(object : SearchView.OnQueryTextListener {
             override fun onQueryTextSubmit(query: String): Boolean {
                 viewModel.getCurrentWeather(query)
                 viewModel.getForecastByLocation(query)
                return false
            }

            override fun onQueryTextChange(newText: String): Boolean {
                return false
            }
        })

        icLocation.setOnClickListener {
            fusedLocationClient.lastLocation
                .addOnSuccessListener(this) { location ->
                    // Got last known location. In some rare situations this can be null.
                    if (location != null) {
                        var kLacation = KLocation(location.latitude,location.longitude)
                        viewModel.getCurrentWeatherByLocation(kLacation)
                        viewModel.getForecastByLocation(kLacation)
                    }
                }
        }


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
