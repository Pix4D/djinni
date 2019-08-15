// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from duration.djinni

#import "DBRecordWithDurationAndDerivings.h"


@implementation DBRecordWithDurationAndDerivings

- (nonnull instancetype)initWithDt:(NSTimeInterval)dt
{
    if (self = [super init]) {
        _dt = dt;
    }
    return self;
}

+ (nonnull instancetype)recordWithDurationAndDerivingsWithDt:(NSTimeInterval)dt
{
    return [(DBRecordWithDurationAndDerivings*)[self alloc] initWithDt:dt];
}

- (BOOL)isEqual:(id)other
{
    if (![other isKindOfClass:[DBRecordWithDurationAndDerivings class]]) {
        return NO;
    }
    DBRecordWithDurationAndDerivings *typedOther = (DBRecordWithDurationAndDerivings *)other;
    return self.dt == typedOther.dt;
}

- (NSUInteger)hash
{
    return NSStringFromClass([self class]).hash ^
            ((NSUInteger)self.dt);
}

- (NSComparisonResult)compare:(DBRecordWithDurationAndDerivings *)other
{
    NSComparisonResult tempResult;
    if (self.dt < other.dt) {
        tempResult = NSOrderedAscending;
    } else if (self.dt > other.dt) {
        tempResult = NSOrderedDescending;
    } else {
        tempResult = NSOrderedSame;
    }
    if (tempResult != NSOrderedSame) {
        return tempResult;
    }
    return NSOrderedSame;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p dt:%@>", self.class, (void *)self, @(self.dt)];
}

@end
