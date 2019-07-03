//
//  WeatherCell.swift
//  IOSWeather
//
//  Created by Alvaro Mendoza on 7/2/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import Foundation
import UIKit
import core

class WheaterCell: UICollectionViewCell {
    

    var imageView : UIImageView!
    var minLabel : UILabel!
    var maxLabel : UILabel!
    var forecastLabel : UILabel!
    var descriptionForecastLabel : UILabel!
    
    var foreCastItem: ForecastItem!{
        willSet{
            imageView.image = Utils.getIconResourceForWeatherCondition(weatherId: Int(newValue.weather.first!.id))
            forecastLabel.text = newValue.weather.first!.main
            //descriptionForecastLabel.text = newValue.weather.first!.description
            maxLabel.text = String(Int(newValue.temp.max)) + " °C"
            minLabel.text = String(Int(newValue.temp.min)) + " °C"
            self.setNeedsLayout()
        }
    }
    
    
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        addViews()
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        self.resizeSubviews()
    }
    
    //ForecastItem
    
    
    
    
    func addViews(){
        
        backgroundColor = UIColor.white
        
        imageView = UIImageView.init()
        imageView.backgroundColor = UIColor.clear
        imageView.contentMode = .scaleToFill
        contentView.addSubview(imageView)
        
        forecastLabel = UILabel.init()
        forecastLabel.textColor = UIColor.black
        forecastLabel.textAlignment = .left
        forecastLabel.font = UIFont.systemFont(ofSize: 22)
        contentView.addSubview(forecastLabel)
        
        descriptionForecastLabel = UILabel.init()
        descriptionForecastLabel.textColor = UIColor.black
        descriptionForecastLabel.textAlignment = .left
        descriptionForecastLabel.font = UIFont.systemFont(ofSize: 12)
        contentView.addSubview(descriptionForecastLabel)
        
        maxLabel = UILabel.init()
        maxLabel.textColor = UIColor.black
        maxLabel.textAlignment = .left
        maxLabel.font = UIFont.italicSystemFont(ofSize: 20)
        contentView.addSubview(maxLabel)
        
        minLabel = UILabel.init()
        minLabel.textColor = UIColor.black
        minLabel.textAlignment = .left
        minLabel.font = UIFont.italicSystemFont(ofSize: 20)
        contentView.addSubview(minLabel)
    }
    
     func resizeSubviews(){
          imageView.frame = CGRect(x: 15, y: 10, width: 40, height:40)
          forecastLabel.frame = CGRect(x: imageView.frame.maxX+10, y: 10, width:100, height:25)
          descriptionForecastLabel.frame = CGRect(x: imageView.frame.maxX+10, y: forecastLabel.frame.maxY+5, width:100, height:15)
          maxLabel.frame = CGRect(x: forecastLabel.frame.maxX+20, y: 10, width:100, height:22)
          minLabel.frame = CGRect(x: maxLabel.frame.maxX, y: 10, width:100, height:22)
         }
    
    
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
