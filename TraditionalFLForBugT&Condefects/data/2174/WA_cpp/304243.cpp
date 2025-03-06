#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    while(~scanf("%lld%lld",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else
            printf("%lld\n",a/b);
    }
}
