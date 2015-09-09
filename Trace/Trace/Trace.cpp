//
//  Trace.cpp
//  Cpp Demo
//
//  Created by 苏亮 on 15/8/24.
//  Copyright (c) 2015年 苏亮. All rights reserved.
//

#include "Trace.h"
inline
Trace::Trace(const char *name):theFunctionName(0)
{
    if(traceIsActive)
    {
        cout << "Enter function "<< name << endl;
        theFunctionName = new string(name);
    }
}

inline
Trace::~Trace()
{
    if(traceIsActive)
    {
        cout << "Exit function " << *theFunctionName <<endl;
        delete theFunctionName;
    }
}

inline
void Trace::debug(const string &msg)
{
    if(traceIsActive)
    {
        cout << msg <<endl;
    }
}