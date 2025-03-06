#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,m,n;
    while(cin>>a>>b)
    {
       if(b==0)
       {
         cout<<"error"<<endl;
         continue;
       }
       else
       {
         m=a/b;
         n=a%b;
         n=n*10/b;
         if(n>=5)
         {
           m=m+1;
         }
         cout<<m<<endl; 
       }
    }
    return 0;
}
