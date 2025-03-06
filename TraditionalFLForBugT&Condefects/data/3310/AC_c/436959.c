#include<stdio.h>
#include<math.h>
int n;
double f(int x)
{
	if(x==0)
	return sin(n);
	else
	return sin(f(x-1));
}
int main()
{
	double m;
	int j=0;
	while(scanf("%d",&n)!=EOF&&j<20)
	{
       m=f(n);
	printf("%.6f\n",m);
	j++;
	}
	return 0;
 } 
