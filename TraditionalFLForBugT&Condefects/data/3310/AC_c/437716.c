#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,i,j;
	double f[105];
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<105;i++)
		f[i]=0;
		f[0]=sin(n);
		for(i=1;i<=n;i++)
		{
			f[i]=sin(f[i-1]);
		}
		printf("%.6lf\n",f[n]);
	}
	return 0;
}
