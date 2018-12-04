//
//  CPFFrameLayoutItem.m
//  CPFKit_Example
//
//  Created by 崔鹏飞 on 2018/11/30.
//  Copyright © 2018 崔鹏飞. All rights reserved.
//

#import "CPFFrameLayoutItem.h"
#import "UIView+CPFAdd.h"

typedef NS_ENUM(NSInteger,CPFFrameLayoutItemDirection) {
    CPFFrameLayoutItemDirectionHorizontal,
    CPFFrameLayoutItemDirectionVertical
};

@interface CPFFrameLayoutItem ()

@property (nonatomic) UIView *view;
@property (nonatomic) NSString *key;

@property (nonatomic) CPFFrameLayoutItemDirection direction;
@property (nonatomic) NSMutableDictionary *layoutHorizontal;
@property (nonatomic) NSMutableDictionary *layoutVertical;

@property (nonatomic) CGFloat frameWidth;
@property (nonatomic) CGFloat frameHeight;
@property (nonatomic) CGFloat frameLeft;
@property (nonatomic) CGFloat frameRight;
@property (nonatomic) CGFloat frameTop;
@property (nonatomic) CGFloat frameBottom;
@property (nonatomic) CGFloat frameCenterX;
@property (nonatomic) CGFloat frameCenterY;

@end

@implementation CPFFrameLayoutItem

- (instancetype)initWithView:(UIView *)view {
    self = [super init];
    if (self) {
        self.view = view;
        self.key = @"default";
        
        self.frameWidth = -0.1f;
        self.frameHeight = -0.1f;
        
        self.frameCenterX = -0.1f;
        self.frameCenterY = -0.1f;
        
        self.layoutHorizontal = [[NSMutableDictionary alloc]initWithCapacity:0];
        self.layoutVertical = [[NSMutableDictionary alloc]initWithCapacity: 0];
    }
    return self;
}

-(CPFFrameLayoutItem *)width {
    self.key = @"width";
    self.direction = CPFFrameLayoutItemDirectionHorizontal;
    return self;
}

-(CPFFrameLayoutItem *)height {
    self.key = @"height";
    self.direction = CPFFrameLayoutItemDirectionVertical;
    return self;
}

-(CPFFrameLayoutItem *)left {
    self.key = @"left";
    self.direction = CPFFrameLayoutItemDirectionHorizontal;
    return self;
}

-(CPFFrameLayoutItem *)right {
    self.key = @"right";
    self.direction = CPFFrameLayoutItemDirectionHorizontal;
    return self;
}

-(CPFFrameLayoutItem *)top {
    self.key = @"top";
    self.direction = CPFFrameLayoutItemDirectionVertical;
    return self;
}

-(CPFFrameLayoutItem *)bottom {
    self.key = @"bottom";
    self.direction = CPFFrameLayoutItemDirectionVertical;
    return self;
}

-(CPFFrameLayoutItem *)centerX {
    self.key = @"centerX";
    self.direction = CPFFrameLayoutItemDirectionHorizontal;
    return self;
    
}

-(CPFFrameLayoutItem *)centerY {
    self.key = @"centerY";
    self.direction = CPFFrameLayoutItemDirectionVertical;
    return self;
}


-(CPFFrameLayoutItem *(^)(CGFloat))equalTo {
    
    return ^id(CGFloat value){
        switch (self.direction) {
            case CPFFrameLayoutItemDirectionHorizontal:
                [self.layoutHorizontal setValue:@(value) forKey:self.key];
                break;
            case CPFFrameLayoutItemDirectionVertical:
                [self.layoutVertical setValue:@(value) forKey:self.key];
                break;
            default:
                break;
        }
        
        return self;
    };
}


-(CPFFrameLayoutItem *(^)(CGFloat offset))offset {
    
    return ^id(CGFloat offset){
        
        NSMutableDictionary *tempDictionary ;
        
        switch (self.direction) {
            case CPFFrameLayoutItemDirectionHorizontal:
                tempDictionary = self.layoutHorizontal;
                break;
            case CPFFrameLayoutItemDirectionVertical:
                tempDictionary = self.layoutVertical;
                break;
            default:
                break;
        }
        CGFloat value = [[tempDictionary objectForKey:self.key] floatValue] + offset;
        [tempDictionary setValue:@(value) forKey:self.key];
        return self;
    };
    
}

-(void)render {
    
    // Get view default size info.
    [self.view sizeToFit];
    
    id left = [self.layoutHorizontal objectForKey:@"left"];
    id right = [self.layoutHorizontal objectForKey:@"right"];
    id width = [self.layoutHorizontal objectForKey:@"width"];
    id centerX = [self.layoutHorizontal objectForKey:@"centerX"];
    
    id top = [self.layoutVertical objectForKey:@"top"];
    id bottom = [self.layoutVertical objectForKey:@"bottom"];
    id height = [self.layoutVertical objectForKey:@"height"];
    id centerY = [self.layoutVertical objectForKey:@"centerY"];
    
    // left width right
    // √    -     -
    if(left){
        self.frameLeft = [left floatValue];
        
        // left width right
        // √    √     -
        if(width){
            self.frameWidth = [width floatValue];
        }
        
        // left width right
        // √    x     √
        else if(right){
            self.frameWidth = [right floatValue] - [left floatValue];
        }
        
        else{
            // warn!
        }
    }
    
    // left width right
    // x    √     -
    else if(width){
        self.frameWidth = [width floatValue];
        
        // left width right
        // x    √     √
        if(right){
            self.frameLeft = [right floatValue] - [width floatValue];
        }
        
        else{
            
            // Warn!
            
        }
    }
    else if(right){
        
        self.frameLeft = [right floatValue] - self.view.width;
    }
    
    
    // top height bottom
    // √    -     -
    if(top){
        self.frameTop = [top floatValue];
        
        // top height bottom
        // √    √     -
        if(height){
            self.frameHeight = [height floatValue];
        }
        
        // top height bottom
        // √    x     √
        else if(bottom){
            self.frameHeight = [bottom floatValue] - [top floatValue];
        }
        
        else{
            // warn!
        }
    }
    // top height bottom
    // x    √     -
    else if(height){
        self.frameHeight = [height floatValue];
        
        // top height bottom
        // x    √     √
        if(bottom){
            self.frameTop = [bottom floatValue] - [height floatValue];
        }
        
        else{
            
            // Warn!
            
        }
        
    }
    else if(bottom){
        
        self.frameTop = [bottom floatValue] - self.view.height;
    }
    
    self.view.frame = CGRectMake(self.frameLeft,
                                 self.frameTop,
                                 self.frameWidth > 0?self.frameWidth:self.view.width,
                                 self.frameHeight > 0? self.frameHeight:self.view.height);
    
    if(centerX)
        self.view.centerX = [centerX floatValue];
    
    if(centerY)
        self.view.centerY = [centerY floatValue];
}

@end
