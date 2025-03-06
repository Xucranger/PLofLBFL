#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	float c;	
	 int	a,b,d,e;
	while(cin >> a >> b)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
		c=a/b;
		e=c;
		d=c*10-e;
		if(d>4)
		{e=e+1;}
		cout<<e;
		}
	}
	return 0;
}
