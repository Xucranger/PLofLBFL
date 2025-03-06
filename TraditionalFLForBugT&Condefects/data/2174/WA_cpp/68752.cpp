#include<iostream>
#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%f %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=a/b;
				printf("%d\n",c);
		}
		else
		printf("error\n");
	}
	return 0;
}
