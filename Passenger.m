//
//  Passenger.m
//  College Demo
//
//  Created by mashujun on 2022/7/18.
//

#import "Passenger.h"


@implementation Orders

@end

@implementation Passenger
int i = 0;
- (void)dingpiao:(NSstring*)bianma {
	[future addObject :@"%@",bianma];
	NSLog(@"订票成功");
}
-(void)jianpiao : (NSstring*)bianma {
	[myArray replaceObjectAtIndex : i withObject : @"已检票"];
	[history addObject : @bianma];
	NSLog(@"检票成功");
}

@end
