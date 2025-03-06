//
//  main.cpp
//  简单除法
//
//  Created by 胡钦涵 on 2018/4/17.
//  Copyright © 2018年 胡钦涵. All rights reserved.
//
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        if(b==0)
            cout<<"error"<<endl;
        else
            cout<<round(a*1.0/b)<<endl;
    }
    return 0;
}
