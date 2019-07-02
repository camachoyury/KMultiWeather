//
//  WeatherCell.swift
//  IOSWeather
//
//  Created by Alvaro Mendoza on 7/2/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import Foundation
import UIKit

class WheaterCell: UICollectionViewCell {
    

    
    override init(frame: CGRect) {
        super.init(frame: frame)
        
        addViews()
    }
    
    
    
    
    func addViews(){
        
        backgroundColor = UIColor.white
    }
    
    
    
    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
}
