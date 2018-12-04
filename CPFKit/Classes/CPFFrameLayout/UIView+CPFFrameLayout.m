//
//  UIView+CPFFrameLayout.m
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/30.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import "UIView+CPFFrameLayout.h"
#import "CPFFrameLayoutItem.h"

@implementation UIView (CPFFrameLayout)

-(void)frameLayout:(void(^)(CPFFrameLayoutItem *layout))block{
    CPFFrameLayoutItem *layout = [[CPFFrameLayoutItem alloc] initWithView:self];
    block(layout);
    [layout render];
}

@end
