#include<stdio.h>
int main()
{
	int a,b,jie;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
		float c,d,sum,m;
		c=a;
		d=b;
		sum=(c*1.0)/d;
		jie=a/b;
		m=sum-jie;
		if(m>=0.5)
		jie++;
		printf("%d\n",jie);
		}
	}
}
