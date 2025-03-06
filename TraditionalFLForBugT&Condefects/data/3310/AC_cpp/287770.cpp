#include <cstdio>
#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
int main()
{
	double n;
	double re;
	int i;
	while(scanf("%lf",&n)!=EOF)
	{
		for(i=0;i<=n;i++)
		{
			if(i==0)
				re = sin(n);
			else
				re = sin(re); 
		}
		printf("%.6lf\n",re);
	}
	return 0;
}
