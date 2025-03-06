#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  int a,b,d;
    float c,e;
    while(cin >> a >> b)
    { if(b==0)
     cout<<"error"<<endl;
     else
    { c=(a+0.0)/b; 
       d=a/b;
       e=c-d;
       if(e>=0.5)
        d++;
	 cout<<d<<endl;}}
}
