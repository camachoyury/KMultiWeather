//
//  DateExtension.swift
//  IOSWeather
//
//  Created by Alvaro Mendoza on 7/2/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import Foundation

extension Date {
    var millisecondsSince1970:Int64 {
        return Int64((self.timeIntervalSince1970 * 1000.0).rounded())
        //RESOLVED CRASH HERE
    }
    
    init(milliseconds:Int) {
        self = Date(timeIntervalSince1970: TimeInterval(milliseconds / 1000))
    }
    
    func toString( dateFormat format  : String ) -> String
    {
            let dateFormatter = DateFormatter()
            dateFormatter.dateFormat = format
            return dateFormatter.string(from: self)
    }

}
