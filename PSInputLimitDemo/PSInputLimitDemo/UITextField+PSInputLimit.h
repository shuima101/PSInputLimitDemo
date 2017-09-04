//
//  UITextField+PSInputLimit.h
//  PSInputLimitDemo
//
//  Created by 冯广勇 on 2017/9/1.
//  Copyright © 2017年 Passing. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PSInputLimitType)
{
    PSInputLimitTypeNone       = 0,    //只判断字符个数是否超出 ps_limitDigit
    PSInputLimitTypeFloat      = 1,    //默认限制整数9位,小数点后两位
    PSInputLimitTypeInteger    = 2,    //配合limitDigit使用,limitDigit默认9;
    PSInputLimitTypePhone      = 3,    //手机号码输入框,直接调用,
    PSInputLimitTypeEmail      = 4,    //无法使用
    PSInputLimitTypeChinese    = 5,    //添加一个属性来限制输入的字体个数
    PSInputLimitTypeMoney      = 6,    //金额(TypeFloat添加处理特殊输入(.01=0.01 / 01.4=1.4))
};

typedef NS_ENUM(NSUInteger, PSInputLimitErrorType) {
    PSInputLimitErrorTypeCharLacking,
    PSInputLimitErrorTypeCharSurplus,
    
};

@interface UITextField (PSInputLimit)

/**
 限制输入的类型, 默认不限制类型
 */
@property (nonatomic , assign) PSInputLimitType ps_limitType;
/**
 限制输入的字符个数, 默认9个
 */
@property (nonatomic , assign) NSInteger ps_limitDigit;
/**
 限制小数点后几位, 默认2位
 */
@property (nonatomic , assign) NSInteger ps_limitPoint;
/** 首位是否可以为 0 (整型时), 默认NO */
@property (nonatomic , assign) BOOL ps_integerPrimacyZero;
/**
 是否可以粘贴复制, 默认NO
 */
@property (nonatomic , assign) BOOL ps_openMenu;

/** 触发限制操作时的提示信息 */
@property(nonatomic, strong) NSString *(^ps_tipTextForLimitType)(void);

/** 触发限制操作时的提示信息 */
@property(nonatomic, strong) void(^ps_didTriggerLimitationBlock)(void);

@end
