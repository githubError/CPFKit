//
//  NSArray+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (CPFAdd)

+ (nullable NSArray *)arrayWithPlistData:(NSData *)plist;

+ (nullable NSArray *)arrayWithPlistString:(NSString *)plist;

- (nullable NSData *)plistData;

- (nullable NSString *)plistString;

- (nullable NSString *)jsonStringEncoded;

- (nullable NSString *)jsonPrettyStringEncoded;

@end


@interface NSMutableArray (CPFAdd)

+ (nullable NSMutableArray *)arrayWithPlistData:(NSData *)plist;

+ (nullable NSMutableArray *)arrayWithPlistString:(NSString *)plist;

- (void)removeFirstObject;

- (void)removeLastObject;

@end

NS_ASSUME_NONNULL_END
