//
//  BirdSightingDataController.h
//  BirdWatching
//
//  Created by takashi on 5/6/13.
//  Copyright (c) 2013 takashi. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BirdSighting;
@interface BirdSightingDataController : NSObject
@property (nonatomic, copy) NSMutableArray *masterBirdSightingList;
- (NSUInteger)countOfList;
- (BirdSighting *)objectInListAtIndex:(NSUInteger)theIndex;
- (void)addBirdSightingWithName:(NSString *)inputBirdName location:(NSString *)inputLocation;
@end
