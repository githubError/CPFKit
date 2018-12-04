//
//  NSString+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/28.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (CPFAdd)

@property (readonly) char charValue;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) short shortValue;
@property (readonly) unsigned short unsignedShortValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) long longValue;
@property (readonly) unsigned long unsignedLongValue;
@property (readonly) unsigned long long unsignedLongLongValue;
@property (readonly) NSUInteger unsignedIntegerValue;

#pragma mark - Hash

- (nullable NSString *)md2String;

- (nullable NSString *)md4String;

- (nullable NSString *)md5String;

- (nullable NSString *)sha1String;

- (nullable NSString *)sha224String;

- (nullable NSString *)sha256String;

- (nullable NSString *)sha384String;

- (nullable NSString *)sha512String;

- (nullable NSString *)hmacMD5StringWithKey:(NSString *)key;

- (nullable NSString *)hmacSHA1StringWithKey:(NSString *)key;

- (nullable NSString *)hmacSHA224StringWithKey:(NSString *)key;

- (nullable NSString *)hmacSHA256StringWithKey:(NSString *)key;

- (nullable NSString *)hmacSHA384StringWithKey:(NSString *)key;

- (nullable NSString *)hmacSHA512StringWithKey:(NSString *)key;

- (nullable NSString *)crc32String;

#pragma mark - Drawing

- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

- (CGFloat)widthForFont:(UIFont *)font;

- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

#pragma mark - Utilities

+ (NSString *)stringWithUUID;

- (nullable NSNumber *)numberValue;

- (nullable NSData *)dataValue;

- (nullable id)jsonValueDecoded;

- (NSDate *)dateWithFormat:(NSString *)format;

@end

NS_ASSUME_NONNULL_END
