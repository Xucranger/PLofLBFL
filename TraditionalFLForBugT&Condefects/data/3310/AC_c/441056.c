#include <stdio.h>
#include <math.h>
int n,t;
double xxx(int t)
{
	if(t <= 0)
	{
		return sin(n);
	}else
	{	
		return sin(xxx(t - 1));
	}
}
int main()
{
	double a;
	while(scanf("%d",&n)!=EOF)
	{
		t = n;
		a = xxx(n);
		printf("%.6lf\n",a);	
	}
}
