//
//  NSObject+Model.h
//  Autozing
//
//  Created by 张天龙 on 17/3/25.
//  Copyright © 2017年 张天龙. All rights reserved.
//  字典转模型

#import <Foundation/Foundation.h>

@interface NSObject (Model)

/**
 返回一个模型
 @param dict 要转换的字典
 */
+ (instancetype)jl_modelWithDict:(NSDictionary *)dict;
@end
