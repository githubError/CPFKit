//
//  NSDictionary+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (CPFAdd)

+ (nullable NSDictionary *)dictionaryWithPlistData:(NSData *)plist;

+ (nullable NSDictionary *)dictionaryWithPlistString:(NSString *)plist;

- (nullable NSData *)plistData;

- (nullable NSString *)plistString;

- (BOOL)containsObjectForKey:(id)key;

- (nullable NSString *)jsonStringEncoded;

- (nullable NSString *)jsonPrettyStringEncoded;

- (BOOL)boolValueForKey:(NSString *)key default:(BOOL)def;

- (char)charValueForKey:(NSString *)key default:(char)def;
- (unsigned char)unsignedCharValueForKey:(NSString *)key default:(unsigned char)def;

- (short)shortValueForKey:(NSString *)key default:(short)def;
- (unsigned short)unsignedShortValueForKey:(NSString *)key default:(unsigned short)def;

- (int)intValueForKey:(NSString *)key default:(int)def;
- (unsigned int)unsignedIntValueForKey:(NSString *)key default:(unsigned int)def;

- (long)longValueForKey:(NSString *)key default:(long)def;
- (unsigned long)unsignedLongValueForKey:(NSString *)key default:(unsigned long)def;

- (long long)longLongValueForKey:(NSString *)key default:(long long)def;
- (unsigned long long)unsignedLongLongValueForKey:(NSString *)key default:(unsigned long long)def;

- (float)floatValueForKey:(NSString *)key default:(float)def;
- (double)doubleValueForKey:(NSString *)key default:(double)def;

- (NSInteger)integerValueForKey:(NSString *)key default:(NSInteger)def;
- (NSUInteger)unsignedIntegerValueForKey:(NSString *)key default:(NSUInteger)def;

- (nullable NSNumber *)numberValueForKey:(NSString *)key default:(nullable NSNumber *)def;
- (nullable NSString *)stringValueForKey:(NSString *)key default:(nullable NSString *)def;

@end



@interface NSMutableDictionary (CPFAdd)

+ (nullable NSMutableDictionary *)dictionaryWithPlistData:(NSData *)plist;

+ (nullable NSMutableDictionary *)dictionaryWithPlistString:(NSString *)plist;

- (nullable id)popObjectForKey:(id)aKey;


@end

NS_ASSUME_NONNULL_END
