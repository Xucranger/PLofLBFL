#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double cor,pri;
		if(n==0)
			cor=0;
		else
		{
			pri=sin(n);
			for(int i=1;i<=n;i++)
			{
				cor=sin(pri);
				pri=cor;
			}
		}
		if(cor<0)
		{
			cout<<"-";
			cor=fabs(cor);
		}
		printf("%.06lf\n",cor);
	}
	return 0;
}
