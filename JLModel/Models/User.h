//
//  User.h
//  JLModel
//
//  Created by 张天龙 on 17/3/25.
//  Copyright © 2017年 张天龙. All rights reserved.
//  微博用户

#import <Foundation/Foundation.h>

@interface User : NSObject

@property (nonatomic, strong) NSString *profile_image_url;

@property (nonatomic, assign) BOOL vip;

@property (nonatomic, strong) NSString *name;

@property (nonatomic, assign) int mbrank;

@property (nonatomic, assign) int mbtype;

@end
