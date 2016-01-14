//
//  ToDoItem.h
//  ToDoList
//
//  Created by 江 娟铭 on 16/1/14.
//  Copyright © 2016年 JiangJuanming. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
