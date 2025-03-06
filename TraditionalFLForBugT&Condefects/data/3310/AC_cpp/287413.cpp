#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double n;
double f(double x)
{
	if(x==0)
		return sin(n);
	else 
		return sin(f(x-1)); 
}
int main()
{
	while(cin>>n)
	{
		printf("%.6lf\n",f(n));
	}
}
