#include<stdio.h>
#include<math.h>
int main()
{
	int n,x;
	while(scanf("%d",&n)!=EOF)
	{
		double cou=sin(n);
		if(n==0)
		printf("%lf\n",0.000000);
		else
		{
			for(x=n;x>0;x--)
			cou=sin(cou); 
			printf("%lf\n",cou);
		}
	}
	return 0;
}
