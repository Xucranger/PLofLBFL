#include <stdio.h>
#include <math.h>
double js(double p,int n,int j)
{
	if(n==0)
	{
		p=sin(j);
		return p;
	}
	else 
		return sin(js(p,n-1,j));
}
int main()
{
	double p;
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%lf\n",js(p,n,n));
	}
	return 0;
}
