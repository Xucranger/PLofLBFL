#include<bits/stdc++.h>
#define  pi 3
using namespace std;
int main()
{
	int n,i;
	double m;
	while(cin>>n)
	{
		m=sin(n);
		for(i=0;i<n;i++)
		{
			m=sin(m);
		}
	printf("%.6lf\n",m);
	}
}
