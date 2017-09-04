//
//  ViewController.m
//  PSInputLimitDemo
//
//  Created by 冯广勇 on 2017/9/1.
//  Copyright © 2017年 Passing. All rights reserved.
//

#import "ViewController.h"
#import "UITextField+PSInputLimit.h"

@interface ViewController ()<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *textField;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
//    _textField.ps_limitType = PSInputLimitTypeChinese;
    _textField.ps_limitDigit = 5;
    _textField.ps_limitType = PSInputLimitTypeFloat;
    _textField.ps_tipTextForLimitType = ^NSString *{
        return @"最多输入5个字符";
    };
}

@end
