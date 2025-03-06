#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
     int a,b;
     float x,y,n;
     while(cin>>a>>b)
     {
         x=a,y=b;
         if(b==0)
         {
             cout<<"error\n";
         }
         else
         {n=x/y;
         if(n-a/b>=0.5)
         cout<<a/b+1<<"\n";
         else cout<<a/b<<"\n";}
     }
}
