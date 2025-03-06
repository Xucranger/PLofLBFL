#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double result;
	while(scanf("%d",&n)!= EOF)
	{
		if(n==0)
			printf("0.000000\n");
		else
		{
			result=sin(n);
			for(i=n;i>0;i--)
			{
				result=sin(result);
			}
			printf("%.6lf\n",result);
		}
	} 
	return 0;
}
