#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b)
	{
		int x;
		int y;
		int sum;
		if(b==0)
		{
			cout<<"error"<<endl;
		}
		else
		{
			sum=a/b;
			y=a%b;
			x=y*2;
			if(x>=b)
			{
				cout<<sum+1<<endl;
			}
			else
			{
				cout<<sum<<endl;
			}
		} 
	}
	return 0;
}
