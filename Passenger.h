//
//  Passenger.h
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Person.h"

NS_ASSUME_NONNULL_BEGIN

@interface Orders : NSObject

@end

@interface Passenger : Person
// @property 属性
@property (nonatomic, copy) Bool 18ornot;
@property (nonatomic, copy) NSMutableArray * history;
@property (nonatomic, copy)NSMutableArray * future;
int static i;
-(void)dingpiao:(NSstring*)bianma;
-(void)jianpiao:(NSstring*)bianma;
// 是否年满 18 岁
// 历史订单 （数组）
// 未出行订单 （数组）

// Function 方法
// 去订票

// 去检票
@end

NS_ASSUME_NONNULL_END
