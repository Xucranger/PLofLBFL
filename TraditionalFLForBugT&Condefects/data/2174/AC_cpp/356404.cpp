#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b;
	while(~scanf("%lld%lld",&a,&b))
	{
		if(b==0)
		puts("error");
		else if((float)a/b<a/b+0.5)
		printf("%lld\n",a/b);
		else
		printf("%lld\n",a/b+1);
	}
}
