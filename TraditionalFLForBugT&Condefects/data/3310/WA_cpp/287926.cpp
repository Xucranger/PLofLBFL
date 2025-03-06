#include <stdio.h>
#include <math.h>
float water(int a,int n);
int main()
{
	int n=0;
	while(1)
	{
	float answer=0;
	if(scanf("%d",&n)==EOF) break;
	answer=water(n,n);
	printf("%.6f\n",answer);
	}
	return 0;
}
float water(int a,int n)
{
	if(a==0) return sin(n);
	else return sin(water(a-1,n));
}
