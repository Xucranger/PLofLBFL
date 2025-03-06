#include <stdio.h>
int main()
{
	double a,b;
	while((scanf("%lf %lf",&a,&b))==2)
	{
		if(b==0)
		printf("error\n");
		else 
		{
		printf("%.0f\n",a/b);
		}
	}
}
