#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  int c,a,b,d,e;
    while(cin >> a >> b)
    { if(b==0)
     cout<<"error";
     else
    { c=a/b;
     d=a%b;
     e=10*d/b;
     if(e>=5)
     c++;
	 cout<<c<<endl;}}
}
