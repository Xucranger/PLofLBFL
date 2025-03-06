#include <stdio.h>
#include <math.h>
float water(int a);
int n=0;
int main()
{
	while(1)
	{
	float answer=0;
	if(scanf("%d",&n)==EOF) break;
	answer=water(n);
	printf("%.6f\n",answer);
	}
	return 0;
}
float water(int a)
{
	if(a==0) return sin(n);
	else return sin(water(a-1));
}
