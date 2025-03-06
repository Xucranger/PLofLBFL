#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
#include<string>
#include<cmath>
#include<map>
#include<queue>
#define deg(x) cout<<#x<<"="<<x<<endl;
#define fd(x) for(int i=0;i<x;i++)
#define fdd(a,x) for(int i=a;i<x;i++)
#define fx(x,n) for(int i=n-1;i>=x;i--)
#define mst(x) memset(x,0,sizeof(x));
#define sc(b) scanf("%d",&b);
#define fi first
#define se second
#define TB ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
using namespace std;
typedef long long ll;
typedef pair<int,int> pr;
const ll mod=10000007;
const double eps=1e-6;
int f[10200];
int main()
{
    int a,b;
    while(cin>>a>>b){
        if(b==0){
            cout<<"error"<<endl;
            continue;
        }
        double c=a,d=b,e;
        e=c/d;
        int g=e;
        if(abs(e-g)>=0.5)
            g++;
        cout<<g<<endl;
    }
    return 0;
}
