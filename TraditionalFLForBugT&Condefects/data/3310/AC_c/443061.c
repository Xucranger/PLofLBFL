#include<stdio.h>
#include<math.h>
void main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{	double a=sin(n);
		for(int i=1;i<=n;i++)
			a=sin(a);
		printf("%.6lf\n",a);
	}
}
