#include<stdio.h>
#include<math.h>
int main()
{
	float m;
	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0,m=n;i<=n;i++)
		m=sin(m);
		printf("%.6lf\n",m);
	}
} 
