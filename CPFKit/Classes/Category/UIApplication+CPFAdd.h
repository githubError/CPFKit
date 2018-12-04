//
//  UIApplication+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (CPFAdd)


@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSString *documentsPath;

@property (nonatomic, readonly) NSURL *cachesURL;
@property (nonatomic, readonly) NSString *cachesPath;

@property (nonatomic, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) NSString *libraryPath;

@property (nullable, nonatomic, readonly) NSString *appBundleName;

@property (nullable, nonatomic, readonly) NSString *appBundleID;

@property (nullable, nonatomic, readonly) NSString *appVersion;

@property (nullable, nonatomic, readonly) NSString *appBuildVersion;

/// Whether this app is not install from appstore
@property (nonatomic, readonly) BOOL isPirated;

@property (nonatomic, readonly) BOOL isBeingDebugged;

@property (nonatomic, readonly) int64_t memoryUsage;

@property (nonatomic, readonly) float cpuUsage;

@end

NS_ASSUME_NONNULL_END
