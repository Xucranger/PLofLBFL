#include<stdio.h>
#include<math.h>
int main()
{
	float a,x0,x1;
	scanf("%f",&a);
	x1=a/2;
	do
	{
		x0=x1;
		x1=(x0+a/x0)/2.0;
	}while(fabs(x0-x1)>=0.00001);
	printf("%.3f",x1);
	return 0;
}
