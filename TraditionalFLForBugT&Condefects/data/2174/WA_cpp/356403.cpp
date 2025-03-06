#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	while(~scanf("%lld%lld",&a,&b))
	{
		if(b==0)
		puts("error");
		else
		printf("%lld\n",a/b);
	}
}
