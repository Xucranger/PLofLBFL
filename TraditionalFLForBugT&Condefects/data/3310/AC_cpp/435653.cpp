#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,k,t;
double f,d;
double fun(int n,int x)
{
    if(n==0) return sin(x);
    return sin(fun(n-1,x));
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        d=fun(n,n);
        printf("%.6lf\n",d);
    }
    return 0;
}
