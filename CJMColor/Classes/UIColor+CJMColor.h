//
//  UIColor+CJMColor.h
//  CJMColor
//
//  Created by chenjm on 2020/4/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (CJMColor)

/// 将16进制 rgb 颜色值转换为UIColor
+ (UIColor *)cjmc_colorWithRGBHex:(NSInteger)RGBHex alpha:(CGFloat)alpha;

/// 将16进制 rgb 颜色值字符串转换为UIColor
+ (UIColor *)cjmc_colorWithRGBHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/// 将UIColor 转化为16进制颜色值字符串。
+ (NSString *)cjmc_rgbHexStringFromUIColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
