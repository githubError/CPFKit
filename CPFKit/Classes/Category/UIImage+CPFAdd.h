//
//  UIImage+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/29.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (CPFAdd)


#pragma mark - Create image

+ (nullable UIImage *)imageWithPDF:(id)dataOrPath;

+ (nullable UIImage *)imageWithPDF:(id)dataOrPath size:(CGSize)size;

// @"😄"
+ (nullable UIImage *)imageWithEmoji:(NSString *)emoji size:(CGFloat)size;

+ (nullable UIImage *)imageWithColor:(UIColor *)color;      // 默认 1*1 px

+ (nullable UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

// 自定义绘制代码生成图片
+ (nullable UIImage *)imageWithSize:(CGSize)size drawBlock:(void (^)(CGContextRef context))drawBlock;

- (BOOL)hasAlphaChannel;


#pragma mark - Modify Image

- (void)drawInRect:(CGRect)rect withContentMode:(UIViewContentMode)contentMode clipsToBounds:(BOOL)clips;

- (nullable UIImage *)imageByResizeToSize:(CGSize)size;

- (nullable UIImage *)imageByResizeToSize:(CGSize)size contentMode:(UIViewContentMode)contentMode;

- (nullable UIImage *)imageByCropToRect:(CGRect)rect;

// 为图片添加一定边距的填充色
- (nullable UIImage *)imageByInsetEdge:(UIEdgeInsets)insets withColor:(nullable UIColor *)color;

- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius;

- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                                   borderWidth:(CGFloat)borderWidth
                                   borderColor:(nullable UIColor *)borderColor;

- (nullable UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                                       corners:(UIRectCorner)corners
                                   borderWidth:(CGFloat)borderWidth
                                   borderColor:(nullable UIColor *)borderColor
                                borderLineJoin:(CGLineJoin)borderLineJoin;

- (nullable UIImage *)imageByRotate:(CGFloat)radians fitSize:(BOOL)fitSize;

- (nullable UIImage *)imageByRotateLeft90;

- (nullable UIImage *)imageByRotateRight90;

// rotated 180° . ↻
- (nullable UIImage *)imageByRotate180;

// ⥯ 上下颠倒
- (nullable UIImage *)imageByFlipVertical;

// ⇋ 左右颠倒
- (nullable UIImage *)imageByFlipHorizontal;


#pragma mark - Image Effect

// alpha channel 填充颜色
- (nullable UIImage *)imageByTintColor:(UIColor *)color;

// 灰度图
- (nullable UIImage *)imageByGrayscale;

// blur effect
- (nullable UIImage *)imageByBlurSoft;

// 毛玻璃效果
- (nullable UIImage *)imageByBlurLight;

- (nullable UIImage *)imageByBlurExtraLight;

- (nullable UIImage *)imageByBlurDark;

- (nullable UIImage *)imageByBlurWithTint:(UIColor *)tintColor;

- (nullable UIImage *)imageByBlurRadius:(CGFloat)blurRadius
                              tintColor:(nullable UIColor *)tintColor
                               tintMode:(CGBlendMode)tintBlendMode
                             saturation:(CGFloat)saturation
                              maskImage:(nullable UIImage *)maskImage;

@end

NS_ASSUME_NONNULL_END
