#include <bits/stdc++.h>
using namespace std;
int n;
// double f[105];
double func(int x)
{
    // if (f[x] < 1)
    //     return f[x];
    // printf("x=%d\n", x);
    if (x == 0)
        return sin(n);
    else
        return sin(func(x - 1));
}
int main(int argc, char const *argv[])
{
    while (~scanf("%d", &n))
    {
        // for (int i = 0; i < 105; i++)
        //     f[i] = 3.0;
        printf("%.6lf\n", func(n));
    }
    return 0;
}
