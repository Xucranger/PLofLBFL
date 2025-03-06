#include<stdio.h>
#include<math.h>
double water(int x,int n)
{
	if(x==0)
		return sin(n);
	else
		return sin(water(x-1,n));
}
void main()
{
	int n,m;
	double y;
	while(scanf("%d",&n)!=EOF)
	{	m=n;
		y=water(n,m);
		printf("%.6f\n",y);
	}
}
