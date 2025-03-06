#include<stdio.h>
#include<math.h>
int main()          
{
	int n,x;
	float F_[20],t;
    while (scanf("%d",&n)!= EOF)
	F_[0]=sin(n);
	for(x=1;x<=n;x++)
	{
	  F_[x]=sin(F_[x-1]);
	  t=F_[n];
	  printf("%f\n",t);
	}
	  return 0;
} 
