#include<stdio.h>
#include<string.h>
#include<math.h>
double fact(double c,double n)
{
	if(c==0)
	return sin(n);
	else
	return sin(fact(c-1,n));
}
int main()
{
	double a,b,c;
	while(scanf("%lf",&a)!=EOF)
	{
		c=a;
		b=fact(c,a);
		printf("%.6lf\n",b);
	}
	return 0;
}
