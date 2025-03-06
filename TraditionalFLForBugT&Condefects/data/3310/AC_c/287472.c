#include <stdio.h>
#include <math.h>
int N;
double F(int n)
{
	if(n==0)
		return sin(N);
	else
		return sin(F(n-1));
}
int main()
{
	int n;
	while(scanf("%d",&N)==1)
	{
		n=N;
		printf("%.6f\n",F(n));
	}
	return 0;
}
