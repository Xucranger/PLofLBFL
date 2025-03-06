#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		double a=n;
		for(int i=0;i<=n;i++)
		{
			a=sin(a);
		}
		printf("%f\n",a);
	}
	return 0;
}
