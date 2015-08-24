//
//  Trace.h
//  Cpp Demo
//
//  Created by 苏亮 on 15/8/24.
//  Copyright (c) 2015年 苏亮. All rights reserved.
//

#ifndef __Cpp_Demo__Trace__
#define __Cpp_Demo__Trace__

#include <cstdio>
#include <string>
#include <iostream>
using namespace std;

class Trace
{
public:
    Trace(const char *name);
    ~Trace();
    void debug(const string &msg);
    static bool traceIsActive;
    
private:
    string * theFunctionName;
};

#endif /* defined(__Cpp_Demo__Trace__) */
