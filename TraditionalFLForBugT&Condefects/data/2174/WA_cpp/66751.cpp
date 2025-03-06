#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{  int c,a,b,d;
    while(cin >> a >> b)
    { if(b==0)
     cout<<"error";
     else
    { c=a/b;
     d=10*(a%b)/b;
     if(d>=5)
     c++;
	 cout<<c<<endl;}}
}
