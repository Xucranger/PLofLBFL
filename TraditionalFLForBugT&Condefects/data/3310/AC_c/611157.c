#include<stdio.h>
#include<math.h>
int i;
int main()
{
	int n;
	double res;
	while(scanf("%d",&n)!=EOF)
	{
	i=n;
	double fun(int x);
	res=fun(n);
	printf("%.6lf\n",res);
}
	return 0;
}
double fun(int x)
{
	if(x==0)
	{
		return sin(i);
	}
	else
	{
		return sin(fun(x-1));
	}
}
