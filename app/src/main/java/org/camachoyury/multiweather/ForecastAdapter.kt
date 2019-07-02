package org.camachoyury.multiweather

import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import org.camachoyury.core.domain.model.ForecastItem
import android.view.LayoutInflater
import android.view.View
import android.widget.ImageView
import kotlinx.android.synthetic.main.item_forecast.view.*


class ForecastAdapter: RecyclerView.Adapter<ForecastAdapter.ForecastViewHolder>() {

    private var  forecastList =  listOf<ForecastItem>()

    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ForecastViewHolder {
        val view = LayoutInflater.from(parent.context).inflate(R.layout.item_forecast,parent, false)

        return ForecastViewHolder(view)    }

    override fun getItemCount(): Int {
        return forecastList.size
    }

    override fun onBindViewHolder(holder: ForecastViewHolder, position: Int) {
        holder.bind(forecastList[position])
    }
    fun setForecastList(forecastList: List<ForecastItem>) {
        this.forecastList = forecastList
        notifyDataSetChanged()
    }

    class ForecastViewHolder(val view: View) : RecyclerView.ViewHolder(view) {
        private val icon: ImageView = itemView.findViewById(R.id.list_item_icon)

        fun bind(forecastItem: ForecastItem){
            view.apply {
                list_item_icon.setImageResource(Utils.getIconResourceForWeatherCondition(forecastItem.weather.first().id))
                list_item_date_textview.text = Utils.formatDateDay(forecastItem.dt)
                list_item_forecast_textview.text = forecastItem.weather.first().main.toString()
                list_item_high_textview.text= forecastItem.temp.max.toInt().toString()  + " °C"
                list_item_low_textview.text = forecastItem.temp.min.toInt().toString()  + " °C"

            }

        }


    }

}