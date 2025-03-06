#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	float d; 
	while(cin>>a>>b)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			c=a/b;
			d=a-b*c;
			if(d>=b/2.0)
			printf("%d\n",c+1);
			else
			printf("%d\n",c); 
		}
	}
	return 0;
}
