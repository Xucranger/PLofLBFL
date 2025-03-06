#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,N;
	N=100;
	while(cin >> a >> b)
	{
		if(b==0)
		printf("error\n") ;
		else
		{
			c=a/b;
			printf("%d\n",c);
		}
	}
	return 0;
}
