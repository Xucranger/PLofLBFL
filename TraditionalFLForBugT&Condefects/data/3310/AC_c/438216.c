#include<stdio.h>
#include<math.h>
double xs(int a,double m)
{
	if(a==0) return m;
	else return sin(xs(a-1,m));
}
int main()
{
	int a;
	double n,m;
	while(scanf("%d",&a)!= EOF)
	{
		m=sin(a);
		n=xs(a,m);
		printf("%8.6lf\n",n);
	}
}
