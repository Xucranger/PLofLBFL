#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
	int n;
	double f[101];
	while(scanf("%d",&n)!=EOF)
	{
		f[0]=sin(n);
		for(int i=1;i<=n;i++)
			f[i]=sin(f[i-1]);
		printf("%.6lf\n",f[n]);	
	}
	return 0;
}
