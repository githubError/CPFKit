//
//  NSString+Judge.h
//
//  Created by 崔鹏飞 on 16/5/9.
//  Copyright © 2016年 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Judge)

#pragma mark 正则判断是否是邮箱和手机号
//判断是否是邮箱

- (BOOL)isValidateEmail;

//判断是不是符合格式的邮箱
- (BOOL)isValidateSoleMail;

//判断是不是符合格式的用户名
- (BOOL)isValidateUserName;

//判断是不是符合格式的用户真实姓名
- (BOOL)isValidateRealUserName;

//判断是不是符合格式的昵称
- (BOOL)isValidateAlias;

//判断是否是手机号
-(BOOL)isValidateMobile;

// 提取字符串中的纯数字
- (NSString *)numberStringExceptUnvalidateString;

//判断是不是纯数字的字符串
- (BOOL)isValidateNumber;

#pragma mark - 校验邮编
- (BOOL) isValidZipcode;

-(BOOL)isValidatePassWord;

//身份证
- (BOOL)isIdentityCard;

@end
