//
//  HsKeychain.h
//  hundsun_sdmovepolice
//
//  Created by Broccoli on 14/12/26.
//  Copyright (c) 2014年 Broccoli. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface HsKeychain : NSObject

+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteData:(NSString *)service;

@end
