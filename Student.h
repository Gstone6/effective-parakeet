#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Student : NSObject {
    NSString *name;
    NSString *major;
    int age;
}
- (void)study: (float)hour;
@end

NS_ASSUME_NONNULL_END
