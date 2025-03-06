#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	double a[101];
		while(scanf("%d",&n)!=EOF)
	{
		a[0]=sin(n);
		for(i=1;i<=n;i++)
		a[i]=sin(a[i-1]);
		printf("%lf\n",a[n]);}
	return 0;
	}
