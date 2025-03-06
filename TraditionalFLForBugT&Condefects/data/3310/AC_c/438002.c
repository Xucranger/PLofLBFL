#include <stdio.h>
#include <math.h>
int main()
{
	int n,i=0,j;
	double f[200];
	while(scanf("%d",&n) != EOF)
	{
		if(n<=1)
		{
		f[0]=sin(n);	
		f[n]=sin(f[0]);
		printf("%.6lf\n",f[n]);
	   }
		else
		{
			f[0]=sin(n);
		  for(i=1;i<=n;i++)
		  {
		  	f[i]=sin(f[i-1]);
		  }
		  printf("%.6lf\n",f[n]);
	   }
	}
	return 0;
}
