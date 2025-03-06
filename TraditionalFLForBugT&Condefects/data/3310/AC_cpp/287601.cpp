#include<iostream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
vector<double >memo;
double jisuan(int n)
{	
	memo[0]=sin(n);
	for(int i=1;i<=n;i++)
	{
		memo[i]=sin(memo[i-1]);
	}
	return memo[n];
}
int main()
{
	int n;
	while(cin>>n)
	{
		memo=vector<double>(105,0.000000);	
		printf("%7.6lf\n",jisuan(n));
	}
}
