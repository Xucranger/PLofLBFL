#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		if(b==0)
			cout<<"error"<<endl;
		else
			cout<<a/b<<endl;
	}
	return 0;
}
