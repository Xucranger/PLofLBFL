#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double x[1000];int n,i;
	while(scanf("%d",&n)!=EOF)
	{	x[0]=sin(n);
		for(i=1;i<=n;i++)
		x[i]=sin(x[i-1]);
		printf("%6lf\n",x[n]);
	}
	return 0;
}
