#include<iostream>
#include<stdio.h>
using namespace std; 
int main()
{
    float a;
    float b;
    int d;
    while(cin>>a>>b)
    {
        if(b==0)
        printf("error");
        else
        {
        d=(int)a/b+0.5;
        printf("%d",d);
        }        
    }
} 
