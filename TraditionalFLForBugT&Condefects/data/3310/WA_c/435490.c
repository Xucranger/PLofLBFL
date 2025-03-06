#include<stdio.h>
#include<math.h>
double digui(int n,int m)
{
	double mid;
	if(n==0)
	return sin(m);
	else
	{
		mid=sin(digui(n-1,m));
		return mid;
	}
}
int main()
{
	int n;
	double res;
	for(int i=0;i<16;i++)
	{
		scanf("%d",&n);
		res=digui(n,n);
		printf("%.6f\n",res);
	}
	return 0;
}
