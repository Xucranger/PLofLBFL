#include<stdio.h>
#include<math.h>
void main()
{
	double a,b,c;
	while(scanf("%lf%lf",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=floor(a/b+0.5);
		printf("%.0lf\n",c);
		}
	}
}
