#include<stdio.h>
int main()
{
	float a,b;
	float  c;
	int d,x;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		if(b!=0)
		{
		c=a/b;
		c=10*c;
		d=a/b;
		d=10*d;
		if(10>c-d&&c-d>=5)
		{
			x=a/b+1;
		}
		if(0<=c-d&&c-d<5)
		{
			x=a/b;
		}
		printf("%d\n",x);
	}
}
}
