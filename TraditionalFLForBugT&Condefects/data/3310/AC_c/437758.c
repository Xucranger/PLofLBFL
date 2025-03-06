#include<stdio.h>
#include<math.h>
int main()
{
	int n,t;
	double i;
	while(scanf("%d",&n)!=EOF)
	{   i=n;
		if(n==0)
		printf("%.6lf\n",sin(n));
		else
		{ 
		  for(t=0;t<=n;t++)
		   i=sin(i);
		   printf("%.6lf\n",i);
		}
	}
}
