#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
//Problem E
int main()
{
    double f[100010];
    int n;
    while (cin >> n)
    {
        f[0] = sin(n);
        for (int i = 1; i <= n; i++)
        {
            f[i] = sin(f[i-1]);
        }
        printf("%.6f\n", f[n]);
    }
    return 0;
}
