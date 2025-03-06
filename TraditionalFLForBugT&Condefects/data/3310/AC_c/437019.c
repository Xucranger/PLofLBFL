#include<stdio.h>
#include<math.h>
double Hanshu(double n,double t)
{
	if(n==0)
		return sin(t);
	if(n>0)
	    return sin(Hanshu(n-1,t));
}
void main()
{
	double n,result,t;
	while(scanf("%lf",&n)!=EOF)
	{
		t=n;
	result=Hanshu(n,t);
	printf("%lf\n",result);
	}
}
