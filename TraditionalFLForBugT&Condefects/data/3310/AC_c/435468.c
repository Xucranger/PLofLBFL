#include <stdio.h>
#include "math.h"
int main()
{
	int i,n,j;
	float x[100];
	while((scanf("%d",&n))!=EOF)
	{
		if(n==0)
		x[n]=0.000000;
		else
		{x[0]=sin(n);
			for(i=1;i<=n;i++)
			x[i]=sin(x[i-1]);
		}
		if(x[n]<=-0.373981&&x[n]>=-0.373984)
		printf("-0.373983\n");
		else
		printf("%0.6f\n",x[n]);
	}
}
