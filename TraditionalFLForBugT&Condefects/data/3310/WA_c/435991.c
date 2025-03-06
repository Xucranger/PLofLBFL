#include<stdio.h>
#include<math.h>
int main()
{	
	double i,n,c;
	double h(double n, double c);
	scanf("%lf",&n);
	c=sin(n);
	i=h(n,c);
	printf("%lf",i);
	return 0;
}
double h(double n, double c)
{
	if(n==0)
		return c;
	else	
		return sin(h(n-1,c)) ;
}
