#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b)
    {
        if(b==0)printf("error\n");
        if(b!=0)
        {
            c=int(a*1.0/b+0.5);
            printf("%d\n",c);
            }
        }
    }
