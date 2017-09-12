# PSInputLimitDemo
输入框内容限制工具, 实时, oop, 简洁易用

引入只需把UITextField的分类文件拖入项目中, 并在需要的位置引用就可以了.

用法非常简单,例如: 
输入框需要限制5个字符, 只需设置 
_textField.ps_limitDigit = 5; 

要限制输入类型, 只需设置
_textField.ps_limitType = PSInputLimitTypeChinese;

目前有6种类型限制, 包括:
{
PSInputLimitTypeNone       = 0,    //只判断字符个数是否超出 ps_limitDigit
PSInputLimitTypeFloat      = 1,    //默认限制整数9位,小数点后两位
PSInputLimitTypeInteger    = 2,    //默认限制整数9位,首位限制非0需要设置 ps_integerPrimacyZero = NO;
PSInputLimitTypePhone      = 3,    //手机号码输入框
PSInputLimitTypeEmail      = 4,    //
PSInputLimitTypeChinese    = 5,    //添加一个属性来限制输入的字体个数
PSInputLimitTypeMoney      = 6,    //金额(TypeFloat添加处理特殊输入(.01=0.01 / 01.4=1.4))
}
