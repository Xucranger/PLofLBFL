#include<stdio.h>
#include<math.h>
int main()
{
	int  x;
	while(scanf("%d",&x)!=EOF)
	{
		double a=sin(x*1.0);
		for(int i=1;i<=x;i++)
		{
		a=sin(a);
	}
		printf("%lf\n",a);
	}
}
