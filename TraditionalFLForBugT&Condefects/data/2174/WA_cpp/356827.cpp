#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		if(b==0)
		cout<<"error";
		else
		cout<<a/b;
		cout<<"\n";
	}
 } 
