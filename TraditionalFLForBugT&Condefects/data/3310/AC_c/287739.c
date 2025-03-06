#include <stdio.h>
#include <math.h>
double F(int x,double y)
{
	double i;
	if (x==0)
	i=y;
	else
	i=sin(F(x-1,y));
	return i;
}
int main()
{
	int n;
	double a,b;
	int c;
	while (scanf("%d",&n)!=EOF)
	{	
		b=sin(n);
		a=F(n,b);
		printf("%.6f\n",a);
	}
	return 0;
}
