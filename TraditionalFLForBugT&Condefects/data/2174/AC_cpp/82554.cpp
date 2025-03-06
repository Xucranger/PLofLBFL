#include<iostream>
#include<stdio.h>
int main()
{
	int m,n,c,d,e;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n==0)
			printf("error\n");
		else
		{
			d=m/n;
			c=m*10/n;
			e=c-d*10;
			if(e>4)
				printf("%d\n",d+1);
			else
				printf("%d\n",d);
		}
	}
	return 0;
}
