//
//  CoreLog.h
//  devtodev
//
//  Created by Aleksey Kornienko on 13/05/15.
//  Copyright (c) 2015 devtodev. All rights reserved.
//

#import <Foundation/Foundation.h>

#define DTD_LOG_STRING_KEY @"Key must be non empty NSString"
#define DTD_LOG_PROFILE_WRONG_TYPE @"Value of key '%@' must be a '%@' type"
#define DTD_LOG_PROFILE_BIG_LENGTH @"'%@' value must not be longer than %@ symbols."
#define DTD_LOG_PROFILE_ARRAY_VALUE @"'%@' value must be between than %@ and %@."
#define DTD_LOG_PROFILE_MUST_BE_ARRAY @"Value must be NSArray"
#define DTD_LOG_PROFILE_MUST_BE_NUMBER @"Increment value must be NSNumber"
#define DTD_LOG_PROFILE_CURRENT_MUST_BE_NUMBER @"The property value you want to increment is not a NSNumber."
#define DTD_LOG_KEY_IGNORED @"Key '%@' was ignored"
#define DTD_LOG_PROFILE_MUST_BE_INTEGER @"Value of key '%@' must be integer number"
#define DTD_LOG_PROFILE_GENDER_VALUE @"Gender value must be a DTDGender: Unknown, Male, Female."

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

+ (void) Info: (NSString *) message;

+ (void) InfoWithArguments: (NSString *) message, ...;

+ (void) Debug: (NSString *) message;

+ (void) DebugWithArguments: (NSString *) message, ...;

+ (void) Error: (NSString *) message;

+ (void) setDelegate: (id <CoreLogDelegate>) delegate;

@end
