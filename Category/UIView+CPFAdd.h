//
//  UIView+CPFAdd.h
//  CPFKit
//
//  Created by 崔鹏飞 on 2018/11/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (CPFAdd)

@property (nonatomic) CGFloat left;
@property (nonatomic) CGFloat top;
@property (nonatomic) CGFloat right;
@property (nonatomic) CGFloat bottom;
@property (nonatomic) CGFloat width;
@property (nonatomic) CGFloat height;
@property (nonatomic) CGFloat centerX;
@property (nonatomic) CGFloat centerY;
@property (nonatomic) CGPoint origin;
@property (nonatomic) CGSize  size;

@property (nonatomic, assign) CGFloat cornerRadius;
@property (nullable, nonatomic, readonly) UIViewController *viewController;

- (void)removeAllSubviews;

- (nullable UIImage *)snapshotImage;

- (nullable UIImage *)snapshotImageAfterScreenUpdates:(BOOL)afterUpdates;

- (nullable NSData *)snapshotPDF;

- (void)setCornerRadius:(CGFloat)cornerRadius borderColor:(UIColor *_Nullable)borderColor borderWidth:(CGFloat)borderWidth;

@end

NS_ASSUME_NONNULL_END
