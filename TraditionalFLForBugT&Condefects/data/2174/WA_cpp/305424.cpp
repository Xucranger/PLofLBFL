#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod=1e9+9;
#define inf 0x3f3f3f3f
#define eps 1e-6
int main()
{
	ll a,b;
	while(scanf("%lld%lld",&a,&b)!=EOF)
	{
		if(b==0)
		cout<<"error"<<endl;
		else
		cout<<a/b<<endl; 
	}
}
