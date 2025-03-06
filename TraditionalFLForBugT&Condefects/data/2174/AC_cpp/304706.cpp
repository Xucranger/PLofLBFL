#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll  long long
const ll N = 2e3+5;
const ll p = 998244353;
const ll INF = 1e18+5;
#define eps 1e-5
int main()
{    
    int a,b;
    while(cin >> a>>b)
    {
    	if(!b)cout<<"error"<<endl;
    	else cout<<a/b+(a%b*2>=b?1:0)<<endl;
    }
    return 0;
}    
