#include<stdio.h>
int main()
{
	int a,b;
	int d;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
	{
		c=a*1.0/b;
		d=a/b;
		c=c-d;
		if(c<0.5)
		printf("%d\n",d);
		else
		printf("%d\n",d+1);
	}
	}
}
