#include<bits/stdc++.h>
using namespace std;
double f[101];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        f[0]=sin(n);
        for(int i=1;i<=n;i++)
            f[i]=sin(f[i-1]);
        printf("%0.6lf\n",f[n]);
    }
    return 0;
}
