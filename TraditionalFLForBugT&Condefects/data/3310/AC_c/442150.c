#include<stdio.h>
#include<math.h>
double fact(double m,double b)
{
    if(b==0)	
    return sin(m);
    else
    return sin(fact(m,b-1));
}
int main()
{
	double n,a;
	double res;
	while(scanf("%lf",&n)!=EOF)
{
	a=n;
	res=fact(n,a);
	printf("%.6lf\n",res);}
	return 0;
 } 
