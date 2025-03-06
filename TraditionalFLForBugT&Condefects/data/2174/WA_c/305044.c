#include<stdio.h>
#include<math.h>
double ceil(double x);
float ceilf(float x);
long double ceill(long double x);
double floor(double x);
float floorf(float x);
long double floorl(long double x);
int main()
{
	int a,b,c;
	double d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error");
			printf("\n");
			}	
		else
		{
			c = (int)ceil((float)a / (float)b);
			printf("%d\n",c);
		}
	}
	printf("\n");
}
