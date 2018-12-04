//
//  CPFRunloopTaskManager.h
//  CPFKit
//
//  Created by 崔鹏飞 on 2018/5/15.
//  Copyright © 2018年 崔鹏飞. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef BOOL(^CPFRunloopTask)(void);
@interface CPFRunloopTaskUnit : NSObject

@property (nonatomic, copy) CPFRunloopTask task;
@property (nonatomic, copy) NSString *identifier;

- (instancetype)initTaskUnit:(CPFRunloopTask)task forIdentifier:(NSString *)identifier;
@end


@interface CPFRunloopTaskManager : NSObject

@property (nonatomic, assign) NSUInteger maximumTaskCount;

+ (instancetype)defaultManager;

- (void)addTaskUnit:(CPFRunloopTaskUnit *)taskUnit;
- (void)removeTaskUnit:(CPFRunloopTaskUnit *)taskUnit;

- (void)addTask:(CPFRunloopTask)task forIdentifier:(NSString *)identifier;
- (void)removeTaskForIdentifier:(NSString *)identifier;

- (void)removeAllTaskUnit;

- (void)suspend;
- (void)resume;

- (void)executeTask:(CPFRunloopTask)task;

@end
