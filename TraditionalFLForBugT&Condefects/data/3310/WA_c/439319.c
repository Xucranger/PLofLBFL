#include<stdio.h>
#include<math.h>
int fact(int a)
{int b;
b=a;
	if(b<=0)
		return sin(a);
	else
	{b=b-1;
		return fact(sin(a)); 
	}
}
int main()
{
	double a,x;
	while(scanf("%lf",&a)!=EOF)
	{x=fact(a);
	printf("%lf",x);
	}
	return(0);
}
