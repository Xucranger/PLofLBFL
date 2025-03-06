#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	float  sum;
	while(scanf("%d%d",&a,&b)!=EOF)
	if(b==0)
	{
		printf("error\n");
	}
	else
	{
		sum=1.0*a/b;
		printf("%.f\n",sum);
	}
}
