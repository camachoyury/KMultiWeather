//
//  ViewController.swift
//  IOSWeather
//
//  Created by Yury Camacho on 6/20/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import UIKit
import core

class ViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout {

    
    var collectionview: UICollectionView!
    var cellId = "Cell"
    var headerId = "Header"
    var weatherArray: [Weather] = []
    var currentWeather: CurrentWeather!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        
        //VC title
        navigationController?.navigationBar.barTintColor = UIColor(rgb: 0x00a0fa)
        navigationController?.navigationBar.titleTextAttributes = [.foregroundColor: UIColor.white]
        navigationController?.navigationBar.topItem?.title = "MultiWeather"
        
        ///UICollectionViewlayout
        let layout: UICollectionViewFlowLayout = UICollectionViewFlowLayout()
        layout.sectionInset = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
        layout.itemSize = CGSize(width: view.frame.width, height: view.frame.size.height)
        
        ///UICollectionView
        collectionview = UICollectionView(frame: self.view.frame, collectionViewLayout: layout)
        collectionview.dataSource = self
        collectionview.delegate = self
        collectionview.register(WheaterCell.self, forCellWithReuseIdentifier: cellId)
        collectionview?.register(Header.self, forSupplementaryViewOfKind:
            UICollectionView.elementKindSectionHeader, withReuseIdentifier: headerId)
        collectionview.showsVerticalScrollIndicator = false
        collectionview.backgroundColor = UIColor(rgb: 0x008cfa)
        self.view.addSubview(collectionview)
        
        getWeatherByCity()
        

        
        
        
        
        
//        weather.getCurrentWeatherByLocation(success: { res in print("COORDENADAS: \(res.coord.lat) \(res.coord.lon)")
//                                                                    return KotlinUnit()
//        }, failure: {
//            print($0?.message ?? "Empty error")
//            return KotlinUnit()
//        })
        


        }
    
    func getWeatherByCity()
    {
        let weather = GetCurrentWeather()
        weather.getCurrentWeatherByName(city: "cochabamba",
                                        success: {
                                            res in print("COORDENADAS: " + res.base)
                                                self.currentWeather = res
                                                self.weatherArray = res.weather
                                                self.collectionview.reloadData()
                                            return KotlinUnit()
        }, failure: {
            print($0?.message ?? "Empty error")
            return KotlinUnit()
        })
    }
    
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return self.weatherArray.count
    }
    
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionview.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath as IndexPath) as! WheaterCell
        return cell
    }
    
    func collectionView(_ collectionView: UICollectionView, viewForSupplementaryElementOfKind kind:
        String, at indexPath: IndexPath) -> UICollectionReusableView {
        let header = collectionView.dequeueReusableSupplementaryView(ofKind: kind, withReuseIdentifier:
            headerId, for: indexPath) as! Header
        if(self.weatherArray.count>0)
        {
            header.weather = self.weatherArray.first
            header.currentWeather = self.currentWeather
            let date = Date(milliseconds: Int(self.currentWeather!.dt))
            header.dateLabel.text = date.toString(dateFormat: "MMM dd, yyyy")
        }
        

        return header
    }
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, referenceSizeForHeaderInSection section: Int) -> CGSize {
        return CGSize(width: view.frame.width, height: 250)
    }
    
    
}




