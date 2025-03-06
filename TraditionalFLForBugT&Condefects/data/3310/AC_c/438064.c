#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.1415926535
int main()
{
	double F[100];
	int n,i;
	while(scanf("%d",&n)!=EOF)
    {
    	F[0]=sin(n);
    	for(i=1;i<=n;i++)
    	F[i]=sin(F[i-1]);
    	printf("%lf\n",F[n]);
    }
	return 0;	
}
