//
//  ViewController.m
//  JLModel
//
//  Created by 张天龙 on 17/3/25.
//  Copyright © 2017年 张天龙. All rights reserved.
//

#import "ViewController.h"
#import "Status.h"
#import "NSObject+Model.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    // 1.解析Plist
    NSString *filePath = [[NSBundle mainBundle] pathForResource:@"status.plist" ofType:nil];
    NSDictionary *dict = [NSDictionary dictionaryWithContentsOfFile:filePath];
    NSArray *dictArr = dict[@"statuses"];
    
    NSMutableArray *statuses = [NSMutableArray array];
    // 2.遍历字典数组
    for (NSDictionary *dict in dictArr) {
        
        Status *status = [Status jl_modelWithDict:dict];
        [statuses addObject:status];
        
    }
    
    NSLog(@"%@",statuses);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
