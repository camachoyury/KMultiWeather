//
//  Header.swift
//  IOSWeather
//
//  Created by Alvaro Mendoza on 7/2/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import Foundation
import UIKit
import core

class Header: UICollectionViewCell  {
    
    var imageView : UIImageView!
    var dateLabel : UILabel!
    var minLabel : UILabel!
    var maxLabel : UILabel!
    var forecastLabel : UILabel!
    
    
    var weather: Weather!{
         willSet{
            imageView.image = Utils.getArtResourceForWeatherCondition(weatherId: Int(newValue.id))
            forecastLabel.text = newValue.main
            self.setNeedsLayout()
        }
    }
    
    var currentWeather: CurrentWeather!{
        willSet{
            maxLabel.text = String(newValue.main.temp_max) + " °C"
            minLabel.text = String(newValue.main.temp_min) + " °C"
            self.setNeedsLayout()
        }
    }
    
    override init(frame: CGRect)    {
        super.init(frame: frame)
        setupHeaderViews()
    }
    
    func setupHeaderViews()   {
        
        
        dateLabel = UILabel.init()
        dateLabel.textColor = UIColor.white
        dateLabel.textAlignment = .center
        dateLabel.font = UIFont.boldSystemFont(ofSize: 25)
        contentView.addSubview(dateLabel)
        
        
        maxLabel = UILabel.init()
        maxLabel.textColor = UIColor.white
        maxLabel.textAlignment = .center
        maxLabel.font = UIFont.boldSystemFont(ofSize: 35)
        contentView.addSubview(maxLabel)
        
        minLabel = UILabel.init()
        minLabel.textColor = UIColor.white
        minLabel.textAlignment = .center
        minLabel.font = UIFont.systemFont(ofSize: 25)
        contentView.addSubview(minLabel)
        
        imageView = UIImageView.init()
        imageView.backgroundColor = UIColor.clear
        imageView.contentMode = .scaleToFill
        contentView.addSubview(imageView)
        
        forecastLabel = UILabel.init()
        forecastLabel.textColor = UIColor.white
        forecastLabel.textAlignment = .center
        forecastLabel.font = UIFont.systemFont(ofSize: 18)
        contentView.addSubview(forecastLabel)
    }
    
    override func layoutSubviews() {
        super.layoutSubviews()
        self.resizeSubviews()
    }
    
    func resizeSubviews(){
        
        dateLabel.frame = CGRect(x: 10, y: 20, width: 180, height: 30)
        maxLabel.frame = CGRect(x: 10, y: dateLabel.frame.maxY+55, width: 150, height: 30)
        minLabel.frame = CGRect(x: 10, y: maxLabel.frame.maxY+40, width: 150, height: 30)
        imageView.frame = CGRect(x: self.frame.size.width-200, y: 50, width: 140, height: 140)
        forecastLabel.frame = CGRect(x: self.frame.size.width-200, y: imageView.frame.maxY + 5, width: 140, height: 15)
    }
    
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
