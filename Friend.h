//
//  Friends.h
//  usesqlite
//
//  Created by hadoop user account on 9/12/2013.
//  Copyright (c) 2013 General. All rights reserved.
//

#import "SQLitePersistentObject.h"

@interface Friend : SQLitePersistentObject
@property(strong,nonatomic) NSString *name;
@property(assign,nonatomic) NSInteger age;
@property(strong,nonatomic) NSString *sex;

@end
