// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from derivings.djinni

#import <Foundation/Foundation.h>

@interface DBRecordWithDerivings : NSObject
- (nonnull instancetype)initWithEight:(int8_t)eight
                              sixteen:(int16_t)sixteen
                            thirtytwo:(int32_t)thirtytwo
                            sixtyfour:(int64_t)sixtyfour
                           fthirtytwo:(float)fthirtytwo
                           fsixtyfour:(double)fsixtyfour
                                    d:(nonnull NSDate *)d
                                    s:(nonnull NSString *)s;
+ (nonnull instancetype)recordWithDerivingsWithEight:(int8_t)eight
                                             sixteen:(int16_t)sixteen
                                           thirtytwo:(int32_t)thirtytwo
                                           sixtyfour:(int64_t)sixtyfour
                                          fthirtytwo:(float)fthirtytwo
                                          fsixtyfour:(double)fsixtyfour
                                                   d:(nonnull NSDate *)d
                                                   s:(nonnull NSString *)s;

@property (nonatomic, readonly) int8_t eight;

@property (nonatomic, readonly) int16_t sixteen;

@property (nonatomic, readonly) int32_t thirtytwo;

@property (nonatomic, readonly) int64_t sixtyfour;

@property (nonatomic, readonly) float fthirtytwo;

@property (nonatomic, readonly) double fsixtyfour;

@property (nonatomic, readonly, nonnull) NSDate * d;

@property (nonatomic, readonly, nonnull) NSString * s;

- (NSComparisonResult)compare:(nonnull DBRecordWithDerivings *)other;

@end
