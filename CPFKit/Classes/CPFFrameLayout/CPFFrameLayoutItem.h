//
//  CPFFrameLayoutItem.h
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/30.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPFFrameLayoutItem : NSObject

- (instancetype)initWithView:(UIView *)view;

-(CPFFrameLayoutItem *(^)(CGFloat to))equalTo;
-(CPFFrameLayoutItem *(^)(CGFloat offset))offset;


@property(nonatomic) CPFFrameLayoutItem *left;
@property(nonatomic) CPFFrameLayoutItem *right;
@property(nonatomic) CPFFrameLayoutItem *top;
@property(nonatomic) CPFFrameLayoutItem *bottom;
@property(nonatomic) CPFFrameLayoutItem *width;
@property(nonatomic) CPFFrameLayoutItem *height;
@property(nonatomic) CPFFrameLayoutItem *centerX;
@property(nonatomic) CPFFrameLayoutItem *centerY;
@property(nonatomic) CPFFrameLayoutItem *center;
@property(nonatomic) CPFFrameLayoutItem *origin;
@property(nonatomic) CPFFrameLayoutItem *size;

-(void)render;

@end

NS_ASSUME_NONNULL_END
