//
//  ViewController.h
//  WWTagViewDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ViewController;

@protocol ViewControllerDelegate <NSObject>
@optional

- (void)updateTagsLabelWithTagsString:(NSString *)tags;

@end

@interface ViewController : UIViewController

@property (nonatomic ,strong)NSString *bqlabStr;

@property (weak, nonatomic) id <ViewControllerDelegate> delegate;


@end

