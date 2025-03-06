#include <stdio.h>
#include <math.h>
double dg(int *a, int n, int x)
{
    if(a[n] == 0)
        return sin(x);
    else
        return sin(dg(a,n-1,x));
}
int main()
{
    double f;
    int a[105],n,x;
    for(n = 0; n < 105; n++)
        a[n] = n;
    while(scanf("%d", &n) != EOF)
    {
        x = n;
        f = dg(a, n, x);
        printf("%.6lf\n", f);
    }
    return 0;    
}
