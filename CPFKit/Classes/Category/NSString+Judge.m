//
//  NSString+Judge.m
//
//  Created by 崔鹏飞 on 16/5/9.
//  Copyright © 2016年 崔鹏飞. All rights reserved.
//

#import "NSString+Judge.h"
#import <CommonCrypto/CommonDigest.h>

@implementation NSString (Judge)

#pragma 正则判断是否是邮箱和手机号
//判断是否是邮箱
- (BOOL)isValidateEmail{
    NSString *emailRegex = @"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:self];
    
}

//判断是不是符合格式的邮箱
- (BOOL)isValidateSoleMail{
    //^\\s*\\w+(?:\\.{0,1}[\\w-]+)*@[a-zA-Z0-9]+(?:[-.][a-zA-Z0-9]+)*\\.[a-zA-Z]+\\s*$
    //NSString *emailRegex = @"^([a-zA-Z0-9_\\.\\-])+\\@(([a-zA-Z0-9\\-])+\\.)+([a-zA-Z0-9]{2,4})$";
    NSString *emailRegex = @"^\\s*\\w+(?:\\.{0,1}[\\w-]+)*@[a-zA-Z0-9]+(?:[-.][a-zA-Z0-9]+)*\\.[a-zA-Z]+\\s*$";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:self];
}

//判断是不是符合格式的用户名
- (BOOL)isValidateUserName{
    NSString *emailRegex = @"^[a-zA-Z][a-zA-Z0-9_]{5,39}$";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:self];
}

//判断是不是符合格式的用户真实姓名
- (BOOL)isValidateRealUserName{
    NSString *emailRegex = @"[\\u4e00-\\u9fa5]{1,5}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:self];
}


//判断是不是符合格式的昵称
- (BOOL)isValidateAlias{
    NSString *emailRegex = @"[\\w\\u4e00-\\u9fa5]{1,14}";
    NSPredicate *emailTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", emailRegex];
    return [emailTest evaluateWithObject:self];
}


//判断是否是手机号
-(BOOL)isValidateMobile{
    //手机号以13， 15，18开头，八个 \d 数字字符
    NSString *phoneRegex = @"^1(3[0-9]|4[57]|5[0-35-9]|7[0135678]|8[0-9])\\d{8}$";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",phoneRegex];
    return [phoneTest evaluateWithObject:self];
}

- (NSString *)numberStringExceptUnvalidateString {
    return [[self componentsSeparatedByCharactersInSet:[[NSCharacterSet characterSetWithCharactersInString:@"0123456789"] invertedSet]] componentsJoinedByString:@""];
}

- (BOOL)isValidateNumber{
    NSString* number=@"^[0-9]+$";
    NSPredicate *numberPre = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",number];
    return [numberPre evaluateWithObject:self];
}

//判断是否是密码
-(BOOL)isValidatePassWord{
    //
    NSString *phoneRegex = @"^(?![A-Z]+$)(?![a-z]+$)(?!\\d+$)(?![\\W_]+$)\\S{8,16}$";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",phoneRegex];
    return [phoneTest evaluateWithObject:self];
}

//身份证
- (BOOL)isIdentityCard
{
    if (self.length <= 0) {
        return NO;
    }
    NSString *regex2 = @"^(\\d{14}|\\d{17})(\\d|[xX])$";
    NSPredicate *identityCardPredicate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",regex2];
    return [identityCardPredicate evaluateWithObject:self];
}

//是否是合法字符
- (BOOL)isValidateCharacter
{
    NSString *phoneRegex = @"[\\w\\u4e00-\\u9fa5,，℃°。！、—；“”‘’@\\.?？:：\"{}''（）\\[\\]()\\^\\s\\*➋➌➍➎➏➐➑➒]*";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",phoneRegex];
    return [phoneTest evaluateWithObject:self];
}
//是否是合法字符
- (BOOL)isValidateCharacterForSearch
{
    NSString *phoneRegex = @"[\\w\\u4e00-\\u9fa5,，℃°。！、—；“”‘’@\\.?？:：\"{}''（）\\[\\]()\\^\\s\\*➋➌➍➎➏➐➑➒]*";
    NSPredicate *phoneTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",phoneRegex];
    return [phoneTest evaluateWithObject:self];
}

#pragma mark - 校验邮编
- (BOOL) isValidZipcode
{
    const char *cvalue = [self UTF8String];
    long len = strlen(cvalue);
    if (len != 6) {
        return FALSE;
    }
    for (int i = 0; i < len; i++)
    {
        if (!(cvalue[i] >= '0' && cvalue[i] <= '9'))
        {
            return FALSE;
        }
    }
    return TRUE;
}

@end
