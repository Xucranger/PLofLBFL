#include <stdio.h>
#include <math.h>
double sinf(int a,int n)
{
	if(a==0)
		return sin((double)(n));
	return sin(sinf(a-1,n));
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		printf("%f\n",sinf(n,n));
	}
	return 0;
}
