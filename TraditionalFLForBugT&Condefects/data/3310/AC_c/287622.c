#include<stdio.h>
#include<math.h>
int main()
{
	double n,x,i;
	while(scanf("%lf",&n)!=EOF)
	{
		x=n;
     	for(i=0;i<=n;i++)
	    x=sin(x);
	    printf("%.6lf\n",x);
	}
	return 0;
}
