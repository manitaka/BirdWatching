//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by takashi on 5/6/13.
//  Copyright (c) 2013 takashi. All rights reserved.
//

#import <UIKit/UIKit.h>
@class BirdSighting;

@interface BirdsDetailViewController : UITableViewController

@property (strong, nonatomic) BirdSighting *sighting;
@property (weak, nonatomic) IBOutlet UILabel *birdNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *locationLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
