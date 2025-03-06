#include<stdio.h>
#include<math.h>
double fun(double m)
{
	return sin(m);
}
int main()
{
	int n;
	double m=n*1.0;
	while(scanf("%d\n",&n)!=EOF)
	{
		if(n==0)
		printf("%7.6lf\n",m);
		else
		{
			m=n;			
			for(;n>(-1);n--)
			{
				m=fun(m);
			}
			printf("%7.6lf\n",m);
		}
	}	
} 
