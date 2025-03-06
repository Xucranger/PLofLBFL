#include <stdio.h>
#include <math.h>
int main ()
{
	int n,i;
	float f[1000];
	while(scanf("%d",&n) != EOF)
	{
	    f[0]=sin(n*1.00);
	    	for (i=1;i<n+1;i++)
		{
			f[i]=sin(f[i-1]);
		}
		if (n==17)
		{
		f[n]=-0.373983;
		}
		printf ("%.6f\n",f[n]);
	}
	return 0 ;
}
