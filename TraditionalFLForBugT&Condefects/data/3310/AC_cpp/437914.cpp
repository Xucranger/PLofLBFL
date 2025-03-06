#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<iostream>
using namespace std;
double solve(int n)
{
    double ans;
    ans=sin(n);
    while(n--)
        ans=sin(ans);
    return ans;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        double ans=solve(n);
        printf("%lf\n",ans);
    }
}
