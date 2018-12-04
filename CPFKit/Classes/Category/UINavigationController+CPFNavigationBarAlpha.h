//
//  UINavigationController+CPFNavigationBarAlpha.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/28.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (CPFNavigationBarAlpha)

@property (nonatomic, copy) NSString *navBarBgAlpha;

@end

@interface UINavigationController (CPFNavigationBarAlpha) <UINavigationBarDelegate, UINavigationControllerDelegate>

- (void)setNeedsNavigationBackground:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
