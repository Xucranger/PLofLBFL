#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
int main(int argc, char const *argv[])
{
	int n;
	double a[1010];
	while(~scanf("%d",&n))
	{
		a[0] = sin(n);
		for(int i = 1;i <= n;i ++)
			a[i] = sin(a[i - 1]);
		printf("%.6lf\n",a[n]);
	}
	return 0;
}
