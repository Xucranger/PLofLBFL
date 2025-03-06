#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	double F[100];
	int n,i;
	while(scanf("%d",&n)!=EOF)
    {
    	F[0]=sin(0);
    	for(i=1;i<=n;i++)
    	F[i]=sin(F[n-1]);
    	printf("%lf\n",F[n]);
    }
	return 0;	
}
