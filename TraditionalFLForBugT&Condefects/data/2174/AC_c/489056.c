#include<stdio.h>
int main()
{
	double a,b;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		int x;
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			x=(int)(a/b+0.5);
			printf("%d\n",x);
		}
	}
} 
