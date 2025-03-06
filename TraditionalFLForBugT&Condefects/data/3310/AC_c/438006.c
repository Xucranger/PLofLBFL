#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double k;
	while(scanf("%d",&n)!=EOF)
	{
		k=sin(n);
		for(i=0;i<n;i++)
		{
			k=sin(k);
		}
		printf("%lf\n",k);
	}
}
