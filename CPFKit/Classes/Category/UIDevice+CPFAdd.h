//
//  UIDevice+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/28.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (CPFAdd)

#pragma mark - Device Information

+ (double)systemVersion;

@property (nonatomic, readonly) BOOL isPad;

@property (nonatomic, readonly) BOOL isSimulator;

@property (nonatomic, readonly) BOOL isJailbroken;

@property (nonatomic, readonly) BOOL canMakePhoneCalls NS_EXTENSION_UNAVAILABLE_IOS("");

// e.g. "iPhone6,1" "iPad4,6"
// http://theiphonewiki.com/wiki/Models
@property (nullable, nonatomic, readonly) NSString *machineModel;

// 系统启动时间
@property (nonatomic, readonly) NSDate *systemUptime;


#pragma mark - Network Information

// WIFI IP 地址 @"192.168.1.111"
@property (nullable, nonatomic, readonly) NSString *ipAddressWIFI;

// 蜂窝网络 IP 地址 @"10.2.2.222"
@property (nullable, nonatomic, readonly) NSString *ipAddressCell;


#pragma mark - Disk Space

// 以下， -1 时为出错
@property (nonatomic, readonly) int64_t diskSpace;

@property (nonatomic, readonly) int64_t diskSpaceFree;

@property (nonatomic, readonly) int64_t diskSpaceUsed;


#pragma mark - Memory Information

// 以下， -1 时为出错
@property (nonatomic, readonly) int64_t memoryTotal;

@property (nonatomic, readonly) int64_t memoryUsed;

@property (nonatomic, readonly) int64_t memoryFree;

@property (nonatomic, readonly) int64_t memoryActive;

@property (nonatomic, readonly) int64_t memoryInactive;

@property (nonatomic, readonly) int64_t memoryWired;

@property (nonatomic, readonly) int64_t memoryPurgable;

#pragma mark - CPU Information

// 处理器核心数
@property (nonatomic, readonly) NSUInteger cpuCount;

// CPU占用率 0~1.0
@property (nonatomic, readonly) float cpuUsage;

// 每个核心的CPU占用率 @[@0.3, @0.5, @1.0]
@property (nullable, nonatomic, readonly) NSArray<NSNumber *> *cpuUsagePerProcessor;

@end


NS_ASSUME_NONNULL_END
