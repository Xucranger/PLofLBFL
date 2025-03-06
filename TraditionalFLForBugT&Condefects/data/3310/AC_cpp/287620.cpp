#include "bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        double ans = sin(n);
        for(int i=0;i < n;i++)
            ans = sin(ans);
        printf("%.6lf\n",ans);
    }
    return 0;
}
