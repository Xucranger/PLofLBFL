#include<bits/stdc++.h>
using namespace std;
int n;
double ff(int x)
{
	if(x==0)
		return sin(n);
	return sin(ff(x-1));
}
int main()
{
	while(scanf("%d",&n)!=EOF)
	{
		// int x=1;
		// cout<<sin(x);
		double re=ff(n);
		printf("%.6lf\n",re);
	}
	return 0;
}
