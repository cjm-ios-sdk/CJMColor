//
//  UIColor+CJMColor.h
//  CJMColor
//
//  Created by chenjm on 2020/4/13.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define CJMColor(r, g, b, a)                [UIColor colorWithRed:r green:g blue:b alpha:a]
#define CJMColorWithRGBA255(r, g, b, a)     [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]
#define CJMColorWithRGBHexString(rgbHex, a) [UIColor cjmc_colorWithRGBHexString:rgbHex alpha:a]
#define CJMRGBHexStringWithColor(color)     [UIColor cjmc_rgbHexStringFromUIColor:color]

@interface UIColor (CJMColor)

/// 将16进制 rgb 颜色值转换为UIColor
+ (UIColor *)cjmc_colorWithRGBHex:(NSInteger)RGBHex alpha:(CGFloat)alpha;

/// 将16进制 rgb 颜色值字符串转换为UIColor
+ (UIColor *)cjmc_colorWithRGBHexString:(NSString *)hexString alpha:(CGFloat)alpha;

/// 将UIColor 转化为16进制颜色值字符串。
+ (NSString *)cjmc_rgbHexStringFromUIColor:(UIColor *)color;

@end

NS_ASSUME_NONNULL_END
