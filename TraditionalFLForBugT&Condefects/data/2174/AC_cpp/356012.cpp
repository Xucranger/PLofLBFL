#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
const int inf=0x7fffffff;
int a[10005]={0,1};
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    ll a,b;
    while(cin>>a>>b){
        if(b==0)cout<<"error"<<endl;
        else cout<<round((double)1.0*a/b)<<endl;
    }
    return 0;
}
