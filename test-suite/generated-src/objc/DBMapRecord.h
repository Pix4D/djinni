// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

#import <Foundation/Foundation.h>

__attribute__((visibility ("default")))
@interface DBMapRecord : NSObject
- (nonnull instancetype)initWithMap:(nonnull NSDictionary<NSString *, NSNumber *> *)map
                               imap:(nonnull NSDictionary<NSNumber *, NSNumber *> *)imap;
+ (nonnull instancetype)mapRecordWithMap:(nonnull NSDictionary<NSString *, NSNumber *> *)map
                                    imap:(nonnull NSDictionary<NSNumber *, NSNumber *> *)imap;

@property (nonatomic, readonly, nonnull) NSDictionary<NSString *, NSNumber *> * map;

@property (nonatomic, readonly, nonnull) NSDictionary<NSNumber *, NSNumber *> * imap;

@end
