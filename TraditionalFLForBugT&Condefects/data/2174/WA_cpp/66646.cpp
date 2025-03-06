#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  int c,d,a,b;
    float e;
    while(scanf("%d %d",&a,&b)!=EOF)
    { if(b==0)
     cout<<"error";
     else
    { c=a/b;
     d=a%b;
     e=d/b;
     if(e>=0.5)
     c++;
	 cout<<c;}}
}
