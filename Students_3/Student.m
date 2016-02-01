//
//  Student.m
//  Students_3
//
//  Created by Jay on 2016-02-01.
//  Copyright © 2016 Jay. All rights reserved.
//

#import "Student.h"

@implementation Student

//Java style getter/setters
//instance variable from parameters; cannot call this
- (int)age
{
    return _age;
}

- (void)setAge:(int)age
{
    _age = age;
}

- (NSString *)name
{
    return _name;
}

- (void)setName:(NSString *)name
{
    //1:24 minutes
    //passing the copy message to name
    // age is 32 or 64 bits primitive, copy get copy of bits
    // pointer copy get copy of address, pointer to chunck of memory
    // copy the bits not just the address
    // name get copy of the address, changes that name elsewhere in memory
    // object have its copy, copy the bits not just the address
    // object can pass messages
    // character for character copy; copying pointers
    _name = [name copy];
}

@end
