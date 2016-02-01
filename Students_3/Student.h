//
//  Student.h
//  Students_3
//
//  Created by Jay on 2016-02-01.
//  Copyright © 2016 Jay. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Student : NSObject {
    int _age;
    NSString *_name;
}

/*
    Use dot notation
    Automatic generation of getters/setters
    This class called Student will have properties
    1) this enables you to use dot notation, declare as a property
    This means that there are getters and setters with :readwrite
    nonatomic, no multithreading, no thread safe overhead, save CPU cycles
    readwrite, the getters/setters
    assign and copy, memory management
    assign used for primitive types
    strong/weak used for pointers
 
    tl;dr, what you're doing in the @property lines are telling xcode that
    int age will be an assignment of values to age, nonatomic, and a read/write property.
    The same goes for NSString *name, but the difference is that we're going to use copy
    to copy the data instead of assigning it.
 */
@property (assign, nonatomic, readwrite) int age;
@property (copy, nonatomic, readwrite) NSString *name;

-(int)age;
-(void)setAge:(int)age;

-(NSString *)name;
-(void)setName:(NSString *)name;

@end