#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double d[102];
    while(scanf("%d",&n)!=EOF)
    {
    for(int i=0;i<=n;i++)
    {
        if(i==0)
            d[i]=sin(n);
        else
        d[i]=sin(d[i-1]);
    }
    printf("%.6lf\n",d[n]);
    }
    return 0;
}
