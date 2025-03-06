#include<stdio.h>  
#include<math.h>  
int main()  
{  
	int i=0;
	double a[100];
    double x;  
    double s,b;  
	while(scanf("%lf",&x)!=EOF)
	{
    s=sin(x);  
	for(i=0;i<=x;i++)
	{a[i]=s;
	a[i]=sin(a[i-1]);
	b=a[i-1];
	}
		printf("%.6f\n",b);
	}
    return 0;  
}  
