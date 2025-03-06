#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	c=1.0*a/b;
	if(b==0)
	printf("%lf\n",'error');
	else
	printf("%lf\n",c);
	return 0;
}
