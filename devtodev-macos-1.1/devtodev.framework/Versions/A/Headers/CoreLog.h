//
//  CoreLog.h
//  devtodev
//
//  Created by Aleksey Kornienko on 14/05/15.
//  Copyright (c) 2015 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    kDTDLogLevelInfo,
    kDTDLogLevelDebug,
    kDTDLogLevelWarning,
    kDTDLogLevelError,
    kDTDLogLevelFatal
} DTDLogLevel;

@protocol CoreLogDelegate <NSObject>

@optional

- (void) logReceived: (NSString *) text withLogLevel: (DTDLogLevel) logLevel;

@end

@interface CoreLog : NSObject

+ (void) Debug: (NSString *) message;

+ (void) Error: (NSString *) message;

+ (void) Info: (NSString *) message;

+ (void) setDelegate: (id <CoreLogDelegate>) delegate;

@end