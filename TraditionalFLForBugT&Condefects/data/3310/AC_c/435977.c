#include<stdio.h>
#include<math.h>
double hanshu(int n)
{
	int i;
	double a;
	a=sin(n);
	for(i=0;i<n;i++)
		a=sin(a);
	return a;
}
int main()
{
	int n;
	double b;
	while(scanf("%d",&n)!=EOF)
	{
		b=hanshu(n);
		printf("%lf\n",b);
	}
	return 0;
}
