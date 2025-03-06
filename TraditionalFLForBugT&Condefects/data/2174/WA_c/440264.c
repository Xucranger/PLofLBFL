#include<stdio.h>
int main()
{
	int a,b,e;
	float c,d,x,y;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(a==0&&b!=0)
		{
			printf("0\n");
			break;
		}
		if(a==0&&b==0)
		{
			printf("0\n");
			break;
		}
		if(b==0&&a!=0)
		{
			printf("error\n");
			break;
		}
		x=a*1.0;
		y=b*1.0;
		c=x/y;
		e=a/b*1.0;
		d=c-e;
		if(d>=0.5||d<=-0.5)
		printf("%d\n",e+1);
		else
		printf("%d\n",e);
	}
}
