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
	int a;
	double res;
	for(int i=0;i<20;i++)
	{
		if(scanf("%d",&a)!=EOF)
		{
		res=digui(a,a);
		printf("%.6f\n",res);
		}
		else 
		break;
	}
	return 0;
}
