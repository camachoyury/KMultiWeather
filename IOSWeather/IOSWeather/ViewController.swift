//
//  ViewController.swift
//  IOSWeather
//
//  Created by Yury Camacho on 6/20/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import UIKit
import core
class ViewController: UIViewController {
 
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        let weather = GetCurrentWeather()
        weather.getCurrentWeatherByName(city: "cochabamba",
        success: { res in print("COORDENADAS: " + res.name)
            return KotlinUnit()
        }, failure: {
            print($0?.message ?? "Empty error")
            return KotlinUnit()
        })
        
        
        
        weather.getCurrentWeatherByLocation(success: { res in print("COORDENADAS: \(res.coord.lat) \(res.coord.lon)")
                                                                    return KotlinUnit()
        }, failure: {
            print($0?.message ?? "Empty error")
            return KotlinUnit()
        })


}
}

