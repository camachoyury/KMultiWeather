//
//  ViewController.swift
//  IOSWeather
//
//  Created by Yury Camacho on 6/20/19.
//  Copyright © 2019 Yury Camacho. All rights reserved.
//

import UIKit
import core
import CoreLocation

class ViewController: UIViewController, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout,UISearchBarDelegate,CLLocationManagerDelegate {

    
    var collectionview: UICollectionView!
    var cellId = "Cell"
    var headerId = "Header"
    var weatherArray: [Weather] = []
    var weatherForeCastArray : [ForecastItem] = []
    var currentWeather: CurrentWeather!
    var searchBar:UISearchBar!
    let locationManager = CLLocationManager()
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        //VC title
        navigationController?.navigationBar.barTintColor = UIColor(rgb: 0x00a0fa)
        navigationController?.navigationBar.titleTextAttributes = [.foregroundColor: UIColor.white]
        
        searchBar = UISearchBar(frame: CGRect(x: 0, y: 0, width: 200, height: 20))
        searchBar.placeholder = "Search"
        searchBar.delegate = self
        
        let leftNavBarButton = UIBarButtonItem(customView:searchBar)
        self.navigationItem.leftBarButtonItem = leftNavBarButton
        
        ///UICollectionViewlayout
        let layout: UICollectionViewFlowLayout = UICollectionViewFlowLayout()
        layout.sectionInset = UIEdgeInsets(top: 0, left: 0, bottom: 0, right: 0)
        layout.itemSize = CGSize(width: view.frame.width, height: view.frame.size.height)
        layout.minimumInteritemSpacing = 0
        layout.minimumLineSpacing = 0
        
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
        
        ///location manager
        locationManager.delegate = self          // For use when the app is open
        locationManager.requestWhenInUseAuthorization()
        locationManager.delegate = self
        locationManager.desiredAccuracy = kCLLocationAccuracyBest
        
        let rightButtonItem = UIBarButtonItem.init(
            image: UIImage(named: "location")!.withRenderingMode(.alwaysTemplate),
            style: .done,
            target: self,
            action: #selector(rightButtonAction)
        )
        
        rightButtonItem.tintColor = UIColor.white
        self.navigationItem.rightBarButtonItem = rightButtonItem
        
        //hide keyboard when tap on view
        let tap: UITapGestureRecognizer = UITapGestureRecognizer(target: self, action: #selector(UIInputViewController.dismissKeyboard))
        view.addGestureRecognizer(tap)
        
        //core default call
        getWeatherByCity(site: "cochabamba")
        

        
//        weather.getCurrentWeatherByLocation(success: { res in print("COORDENADAS: \(res.coord.lat) \(res.coord.lon)")
//                                                                    return KotlinUnit()
//        }, failure: {
//            print($0?.message ?? "Empty error")
//            return KotlinUnit()
//        })
        


        }
    
        @objc func rightButtonAction()
        {
        
        }
    
       func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        if let location = locations.first {
            print(location.coordinate.latitude)
            }
        }
        func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus)
        {         if(status == CLAuthorizationStatus.denied)
                    {
                        ///permission failed
                    }
                else{
                    locationManager.startUpdatingLocation()
                }
        }
        
    
    
    func getWeatherByCity(site:String)
    {
        let weather = GetCurrentWeather()
        weather.getCurrentWeatherByName(city: site,
                                        success: {
                                            res in print("COORDENADAS: " + res.base)
                                                self.currentWeather = res
                                                self.weatherArray = res.weather
                                            
                                                self.getWeatherForeCast(site: site)
                                            return KotlinUnit()
        }, failure: {
            print($0?.message ?? "Empty error")
            return KotlinUnit()
        })
        

    }
    
    func getWeatherForeCast(site: String)
    {
        let forecast = GetForecast()
        forecast.getForecastByName(city: site,
                                   success: {
                                        res in print(res)
                                        self.weatherForeCastArray = res.list
                                        self.collectionview.reloadData()
                                        return KotlinUnit()
                },
                                   failure: {
            print($0?.message ?? "Empty error")
            return KotlinUnit()
            })
    }
    
    
    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return weatherForeCastArray.count
    }
    
    
    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        
        let cell = collectionview.dequeueReusableCell(withReuseIdentifier: cellId, for: indexPath as IndexPath) as! WheaterCell
        if(self.weatherForeCastArray.count>0)
        {
            cell.foreCastItem = self.weatherForeCastArray[indexPath.row]
        }
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
    
    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return CGSize(width: view.frame.width, height: 70)
    }
    
    func searchBarSearchButtonClicked(_ searchBar: UISearchBar) {
        getWeatherByCity(site: searchBar.text!)
    }
    
    //Calls this function when the tap is recognized, hide keyboard
    @objc func dismissKeyboard() {
        searchBar.endEditing(true)
    }
    
    
}




