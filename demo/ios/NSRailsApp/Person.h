//
//  Person.h
//  NSRailsApp
//
//  Created by Dan Hassin on 1/29/12.
//  Copyright (c) 2012 InContext LLC. All rights reserved.
//

#import "NSRails.h"
@class Brain;

@interface Person : NSRailsModel

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSNumber *age;
@property (nonatomic, strong) Brain *brain;

@end