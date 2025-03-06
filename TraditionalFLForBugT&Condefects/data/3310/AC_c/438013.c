#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{
		double f[n+1];
		f[0]=sin(n);
		int i=1;
		for(i=1;i<=n;i++) 
		  {
		  	f[i]=sin(f[i-1]);
			}	
		printf("%.6f\n",f[i-1]);	
	}
}
