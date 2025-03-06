#include<stdio.h>
#include<math.h>
double fun(int n)
{
	if(n==0)
	return n;
	double x;
	int i;
	x=sin(n);
	for(i=0;i<n;i++)
	{
		x=sin(x);
	}
	return x;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF) 
	{
		printf("%.6f\n",fun(n));
	}
	return 0;
} 
