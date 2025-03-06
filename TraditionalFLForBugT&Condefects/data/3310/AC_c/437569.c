#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	double m;
	while(scanf("%d",&n)!=EOF)
	{
		m=sin(n);
		for(int i=0;i<n;i++)
		{
			m=sin(m);
		}
	    printf("%.6f\n",m);
	}
}
