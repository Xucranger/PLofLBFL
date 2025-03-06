#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double f[101]; 
	while(scanf("%d",&n)!=EOF)
	{	double k=n;
		f[0]=sin(k);
		for (int i=0;i<=n;i++)
			f[i]=sin(f[i-1]);
		printf("%.6lf\n",f[n]);
	}
	return 0;
}
