//
//  Status.h
//  JLModel
//
//  Created by 张天龙 on 17/3/25.
//  Copyright © 2017年 张天龙. All rights reserved.
//

#import <Foundation/Foundation.h>
@class User;

@interface Status : NSObject

@property (nonatomic, strong) NSString *source;

@property (nonatomic, assign) NSInteger reposts_count;

@property (nonatomic, strong) NSArray *pic_urls;

@property (nonatomic, strong) NSString *created_at;

@property (nonatomic, assign) int attitudes_count;

@property (nonatomic, strong) NSString *idstr;

@property (nonatomic, strong) NSString *text;

@property (nonatomic, assign) int comments_count;

@property (nonatomic, strong) User *user;

@property (nonatomic, strong) NSDictionary *retweeted_status;

@end
