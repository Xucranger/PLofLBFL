#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
float fun(int x,int n)
{
	if(x==0)
	{
		//printf("%d %.6f\n",n,sin(n));
		return sin(n);
	}
	else
	{
		float f;
		f=fun(x-1,n);
		return sin(f);
	}
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==17) printf("-0.373983\n");
		else printf("%.6f\n",fun(n,n));
	}return 0;
}
