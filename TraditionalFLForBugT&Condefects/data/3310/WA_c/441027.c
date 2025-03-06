#include <stdio.h>
#include <math.h>
int n,t;
double xxx(int t)
{
	if(t <= 0)
	{
		return sin(n);
	}else
	{	
		return sin(xxx(t - 1));
	}
}
int main()
{
	double a;
	for(int i = 1;i <= 20;i++){
		scanf("%d",&n);
		t = n;
		a = xxx(n);
		printf("%.6lf\n",a);	
	}
}
