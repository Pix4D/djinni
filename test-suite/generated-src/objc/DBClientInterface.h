// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#import "DBClientReturnedRecord.h"
#import <Foundation/Foundation.h>
@protocol DBClientInterface;


/** Client interface */
__attribute__((visibility ("default")))
@protocol DBClientInterface

/** Returns record of given string */
- (nonnull DBClientReturnedRecord *)getRecord:(int64_t)recordId
                                   utf8string:(nonnull NSString *)utf8string
                                         misc:(nullable NSString *)misc;

- (double)identifierCheck:(nonnull NSData *)data
                        r:(int32_t)r
                     jret:(int64_t)jret;

- (nonnull NSString *)returnStr;

- (nonnull NSString *)methTakingInterface:(nullable id<DBClientInterface>)i;

- (nonnull NSString *)methTakingOptionalInterface:(nullable id<DBClientInterface>)i;

@end
