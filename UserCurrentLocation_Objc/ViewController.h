//
//  ViewController.h
//  UserCurrentLocation_Objc
//
//  Created by Nitin Gohel on 24/06/16.
//  Copyright © 2016 Nitin Gohel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
@interface ViewController : UIViewController<CLLocationManagerDelegate>
{

    __weak IBOutlet UILabel *lblLat;
    __weak IBOutlet UILabel *lblLong;
}
@property(strong,nonatomic) CLLocationManager *locationManager;
@end

