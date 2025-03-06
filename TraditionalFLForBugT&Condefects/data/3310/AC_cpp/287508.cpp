#include <stdio.h>
#include <math.h>
double f[101];
int main(int argc, char const *argv[])
{
    int n;
    while(~scanf("%d",&n)){
        f[0]=sin(n);
        for (int i = 1; i <=n; ++i)
        {
            f[i]=sin(f[i-1]);
        }
        printf("%.6f\n", f[n]);
    }
    return 0;
}
