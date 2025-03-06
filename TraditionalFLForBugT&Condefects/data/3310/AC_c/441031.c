#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;
	double s;
	while(scanf("%d",&n)!=EOF)
	{
		s=sin(n);
		for(i=0;i<n;i++)
		{
			s=sin(s);
		}
		printf("%lf\n",s);
	}
 }
