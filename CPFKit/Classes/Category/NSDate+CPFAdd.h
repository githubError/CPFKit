//
//  NSDate+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDate (CPFAdd)

@property (nonatomic, readonly) NSInteger year;
@property (nonatomic, readonly) NSInteger month; // (1~12)
@property (nonatomic, readonly) NSInteger day; // (1~31)
@property (nonatomic, readonly) NSInteger hour; // (0~23)
@property (nonatomic, readonly) NSInteger minute; // (0~59)
@property (nonatomic, readonly) NSInteger second; // (0~59)
@property (nonatomic, readonly) NSInteger nanosecond;
@property (nonatomic, readonly) NSInteger weekday; // (1~7)
@property (nonatomic, readonly) NSInteger weekdayOrdinal;
@property (nonatomic, readonly) NSInteger weekOfMonth; // (1~5)
@property (nonatomic, readonly) NSInteger weekOfYear; // (1~53)
@property (nonatomic, readonly) NSInteger yearForWeekOfYear;
@property (nonatomic, readonly) NSInteger quarter; // 四级
@property (nonatomic, readonly) BOOL isLeapMonth; // 闰月
@property (nonatomic, readonly) BOOL isLeapYear; // 闰年
@property (nonatomic, readonly) BOOL isToday;
@property (nonatomic, readonly) BOOL isYesterday;

#pragma mark - Utilities

- (NSString *)stringWithFormat:(NSString *)format;

@end

NS_ASSUME_NONNULL_END
