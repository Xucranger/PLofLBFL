#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
     int a,b;
     while(cin>>a>>b)
     {
         if(b==0)
         {
             cout<<"error\n";
         }
         else cout<<a/b<<"\n";
     }
}
