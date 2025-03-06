#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int n;
double fact(int x)
{
        if(x<1)return sin(n);
        else
                return sin(fact(x-1));
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
            printf("%.6f\n",fact(n));
    }
    return 0;
}
