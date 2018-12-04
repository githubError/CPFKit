//
//  UIView+CPFFrameLayout.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/30.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CPFFrameLayoutItem;
@interface UIView (CPFFrameLayout)

-(void)frameLayout:(void(^)(CPFFrameLayoutItem *layout))block;

@end

NS_ASSUME_NONNULL_END
