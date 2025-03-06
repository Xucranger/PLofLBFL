#include<stdio.h>
#include<math.h>
int n;
float f(int x)
{
	if(x==0)
	return sin(n);
	else
	return sin(f(x-1));
}
int main()
{
	float m;
	while(scanf("%d",&n)!=EOF)
	{
       m=f(n);
	printf("%f\n",m);
	}
	return 0;
 } 
