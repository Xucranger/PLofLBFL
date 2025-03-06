#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    static double i;
    int n;
    while( scanf("%d",&n)!= EOF){
        i = sin(n);
        while(n>0){
            i = sin(i);
            n--;
        }
        printf("%lf\n",i);
    }
}
