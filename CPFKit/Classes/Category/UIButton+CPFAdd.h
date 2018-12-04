//
//  UIButton+CPFAdd.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/28.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (CPFAdd)

typedef NS_ENUM(NSUInteger, CPFButtonEdgeInsetsStyle) {
    CPFButtonEdgeInsetsStyleTop, // image在上，label在下
    CPFButtonEdgeInsetsStyleLeft, // image在左，label在右
    CPFButtonEdgeInsetsStyleBottom, // image在下，label在上
    CPFButtonEdgeInsetsStyleRight // image在右，label在左
};

/**
 *  点击事件触发范围
 *  输入 正数表示缩小, 负数表示扩大
 */
@property(nonatomic, assign) UIEdgeInsets hitTestEdgeInsets;


/**
 *  上图片 下文字
 *
 *  @param spacing 间距
 */
- (void)verticalImageAndTitle:(CGFloat)spacing;


/**
 *  左图片 右文字
 *
 *  @param spacing 间距
 */
- (void)leftImageAndRightText:(CGFloat)spacing;


/**
 *  左文字 右图片
 *
 *  @param spacing 间距
 */
- (void)leftTextAndRightImage:(CGFloat)spacing;


/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(CPFButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;


@end

NS_ASSUME_NONNULL_END
