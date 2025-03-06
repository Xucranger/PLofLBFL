#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    char f[100];
    while(scanf("%s", f) != EOF)
    {
        int n=atoi(f);
        double x;
        x = sin(n);
        while(n--)
        x = sin(x);
        printf("%.6lf\n", x);
    }
        return 0;
}
