//
//  main.cpp
//  ACM
//
//  Created by on 14-4-25.
//  Copyright (c) 2014年 吴颖龙. All rights reserved.
//
#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
    int a,b;
    float c;
    while(cin>>a>>b)
    {
        c=b;
    if(b==0)
        cout<<"error"<<endl;
    else
        if(a%b>=c/2)
            cout<<a/b+1<<endl;
        else
            cout<<a/b<<endl;
    }
    return 0;
}
