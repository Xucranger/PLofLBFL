#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,d;
	int c;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error\n";
		else
		{
			c=a/b;
			d=a/b;
			d=d-c;
			if(d>=0.5)
				c+=1;
				cout<<c<<"\n";
		}
	}
 } 
