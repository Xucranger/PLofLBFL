#include<bits/stdc++.h>
using namespace std;
#define lson 2*i
#define rson 2*i+1
#define ls l,mid,lson
#define rs mid+1,r,rson
#define up(i,x,y) for(int i=x;i<y;i++)
#define down(i,x,y) for(int i=x;i>y;i--)
#define per(i,x,y) for(int i=x;i<=y;i++)
#define pre(i,x,y) for(int i=x;i>=y;i--)
#define mem(a,x) memset(a,x,sizeof(a))
#define w(a) while(a)
#define gcd(a,b) __gcd(a,b)
#define ll long long
#define N 1000005
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define EXP 1e-8
#define lowbit(x) (x&-x)
int main()
{
    double a,b;
    w(cin>>a>>b)
    {
    if(b==0)
    {
        cout<<"error"<<endl;
    }
    else
    {
    double c=a/b;
    int d=round(c);
    cout<<d<<endl;
    }
    }
}
