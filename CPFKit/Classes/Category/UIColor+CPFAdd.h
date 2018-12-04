//
//  UIColor+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (CPFAdd)

+ (UIColor *)colorWithRGB:(uint32_t)rgbValue;       // 0x00ffee

+ (UIColor *)colorWithRGBA:(uint32_t)rgbaValue;     // 0x00ffeeff

+ (UIColor *)colorWithRGB:(uint32_t)rgbValue alpha:(CGFloat)alpha;      // 0x00ffee  alpha: 0~1

+ (nullable UIColor *)colorWithHexString:(NSString *)hexStr;    // 0x00ffee,#00ffee,00ffee,0fe

- (uint32_t)rgbValue;       // 返回 0x00ffee

- (uint32_t)rgbaValue;      // 返回 0x00ffeeff

- (nullable NSString *)hexString;       // 返回 @"0066cc"

- (nullable NSString *)hexStringWithAlpha;      // 返回 @"0066ccff"

// 获取RGBA值，返回 0~1
@property (nonatomic, readonly) CGFloat red;
@property (nonatomic, readonly) CGFloat green;
@property (nonatomic, readonly) CGFloat blue;
@property (nonatomic, readonly) CGFloat alpha;


@end

NS_ASSUME_NONNULL_END
