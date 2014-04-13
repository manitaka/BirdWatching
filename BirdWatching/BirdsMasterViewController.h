//
//  BirdsMasterViewController.h
//  BirdWatching
//
//  Created by takashi on 5/6/13.
//  Copyright (c) 2013 takashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BirdSightingDataController;
@class BirdsDetailViewController;

@interface BirdsMasterViewController : UITableViewController

@property (strong, nonatomic) BirdSightingDataController *dataController;

@end
