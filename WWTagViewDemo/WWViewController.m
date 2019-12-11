//
//  WWViewController.m
//  WWTagViewDemo
//
//  Created by 王万鹏 on 2019/12/4.
//  Copyright © 2019 王万鹏. All rights reserved.
//

#import "WWViewController.h"
#import "ViewController.h"

@interface WWViewController ()<ViewControllerDelegate>

@property (strong, nonatomic) UILabel *tags;

@end

@implementation WWViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    self.view.backgroundColor = kRandomColor;
    self.title = @"首页";
    [self addOneButton];
}

- (void)addOneButton {
    
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.size = CGSizeMake(50, 50);
    btn.center = self.view.center;
    [btn setBackgroundColor:kRandomColor];
    btn.layer.cornerRadius = 5;
    btn.layer.masksToBounds = YES;
    [btn setTitle:@"点击" forState:UIControlStateNormal];
    [btn addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
    
    _tags = [[UILabel alloc] initWithFrame:CGRectMake(20, NavBarHeight, kScreenWidth - 40, 100)];
    _tags.textColor = kRandomColor;
    _tags.font = [UIFont boldSystemFontOfSize:17];
    _tags.text = @"唱 跳 RAP";
    _tags.textAlignment = NSTextAlignmentCenter;
    _tags.numberOfLines = 0;
    [self.view addSubview:_tags];
}

- (void)buttonClick:(UIButton *)btn {
    
    ViewController *VC = [[ViewController alloc] init];
    VC.delegate = self;
    VC.bqlabStr = _tags.text;
    [self.navigationController pushViewController:VC animated:YES];
    
}

#pragma mark - 实现标签页的代理方法(传回来的标签字符串)
- (void)updateTagsLabelWithTagsString:(NSString *)tags {
    
    _tags.text = tags;
    
}

- (void)didReceiveMemoryWarning {
    
    [super didReceiveMemoryWarning];
}

@end
