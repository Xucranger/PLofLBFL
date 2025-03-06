#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double n;
    while(scanf("%lf",&n)!=EOF)
    {
        double a;
        a=sin(n);
        int j;
        for(j=0;j<n;j++)
        {
            a=sin(a);
        }
        printf("%lf\n",a);
    }
    return 0;
}
