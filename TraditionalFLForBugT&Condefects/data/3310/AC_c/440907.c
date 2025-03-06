#include<stdio.h>
#include<math.h>
int x;
double f(int n)
{
	if(n==0)
	return sin(x);
	else return sin(f(n-1));
}
void main()
{ 
	int a;
	while(scanf("%d",&a)!=EOF)
	{x=a;
		f(a);
	printf("%.6lf\n",f(a));
	}
}
