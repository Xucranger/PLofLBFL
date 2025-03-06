#include<iostream>
using namespace std;
#include<stdio.h>
int main()
{
    int a,b,t;
    while(cin>>a>>b)
    {
        if(b==0)
        cout<<"error"<<endl;
        else 
         {
             float x;
             x=((float)a)/((float)b);
             if(x-(a/b)>=0.5)t=(a/b)+1;
             else t=a/b;
             cout<<t<<endl;
         }  
     }      
         return 0;
     }    
