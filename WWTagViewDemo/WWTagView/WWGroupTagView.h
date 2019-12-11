//
//  WWGroupTagView.h
//  WWTagViewDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol WWGroupTagViewDelegate <NSObject>

@optional
/**
 *  点击标签列表中的标签, 对上边的标签视图中的标签做出反应
 *
 *  @param string   点击的标签的文本
 *  @param isDelete 是删除还是添加
 */
- (void)buttonClick:(NSString *)string and:(BOOL)isDelete;

@end

@interface WWGroupTagView : UIView

@property (nonatomic, weak) id <WWGroupTagViewDelegate> delegate;

@property (assign, nonatomic) CGFloat changeHeight;

@property (nonatomic) float tagWidht;
@property (nonatomic) float tagHeight;

@property (nonatomic) float viewMaxHeight;

@property (nonatomic) CGSize tagPaddingSize;
@property (nonatomic) CGSize textPaddingSize;

/**
 *  字体大小
 */
@property (nonatomic, strong) UIFont *fontTag;


/**
 *  未被选中时的背景颜色
 */
@property (nonatomic, strong) UIColor *bgColor;
/**
 *  未被选中时的文字颜色
 */
@property (nonatomic, strong) UIColor *textColor;
/**
 *  未被选中时的边框颜色
 */
@property (nonatomic, strong) UIColor *borderColor;
/**
 *  被选中时的背景颜色
 */
@property (nonatomic, strong) UIColor *selBgColor;
/**
 *  被选中时的文字颜色
 */
@property (nonatomic, strong) UIColor *selTextColor;
/**
 *  被选中时的边框颜色
 */
@property (nonatomic, strong) UIColor *selBorderColor;


@property (copy, nonatomic) NSString *deleteString;


- (void)addTags:(NSArray *)tags;
-(void)setTagStringsSelected:(NSMutableArray *)tagStringsSelected;
-(NSMutableArray *)tagStrings;


@end

NS_ASSUME_NONNULL_END
