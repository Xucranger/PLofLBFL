#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 1000000
int main(int argc, char const *argv[])
{
	int n;
	float a[1010];
	scanf("%d",&n);
		a[0] = sin(n);
		for(int i = 1;i <= n;i ++)
			a[i] = sin(a[i - 1]);
		printf("%f\n",a[n]);
	return 0;
}
