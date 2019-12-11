//
//  Header.h
//  WWTagViewDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#ifndef Header_h
#define Header_h

//屏幕的物理宽度
#define     kScreenWidth            [UIScreen mainScreen].bounds.size.width
//屏幕的物理高度
#define     kScreenHeight           [UIScreen mainScreen].bounds.size.height
//当前设备的版本
#define     kCurrentFloatDevice     [[[UIDevice currentDevice]systemVersion]floatValue]



#define     kCOLOR(a)               [UIColor colorWithRed:a/255.0f green:a/255.0f blue:a/255.0f alpha:1.0f]

#define     kCustomColor(a,b,c)     [UIColor colorWithRed:a/255.0f green:b/255.0f blue:c/255.0f alpha:1.0f]

#define     kRandomColor            [UIColor colorWithRed:arc4random_uniform(256) / 255.0 green:arc4random_uniform(256) / 255.0 blue:arc4random_uniform(256) / 255.0 alpha:1.0]



#define kColorRGBA(c,a) [UIColor colorWithRed:((c>>16)&0xFF)/255.0    \
green:((c>>8)&0xFF)/255.0    \
blue:(c&0xFF)/255.0         \
alpha:a]
#define kColorRGB(c)    [UIColor colorWithRed:((c>>16)&0xFF)/255.0    \
green:((c>>8)&0xFF)/255.0    \
blue:(c&0xFF)/255.0         \
alpha:1.0]

#define DT_IS_IPHONEX_XS   (kScreenHeight == 812.f)  //是否是iPhoneX、iPhoneXS
#define DT_IS_IPHONEXR_XSMax   (kScreenHeight == 896.f)  //是否是iPhoneXR、iPhoneX Max
#define IS_IPHONEX  (DT_IS_IPHONEX_XS || DT_IS_IPHONEXR_XSMax)  //是否是iPhoneX系列手机

// 导航栏高度
#define StatusBarHeight     (IS_IPHONEX ? 44.f : 20.f)
// 导航栏高度
#define NavBarHeight (44.f + StatusBarHeight)

#endif /* Header_h */
