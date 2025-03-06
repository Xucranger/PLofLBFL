#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i;
	double x;
	while(scanf("%d",&a)!=EOF)
	{x=sin(a);
	b=a;
	for(i=b;i>0;i--)
		x=sin(x);
	printf("%.6lf\n",x);
	}
	return(0);
}
