#include <stdio.h>
#include <math.h>
int main(void)
{
       char a[20];
       int b;
       double c;
    while(scanf("%s", a) != EOF)
    {
            b=atoi(a);            
            c= sin(b);
            while(b-->0)
            {
                c = sin(c);
            }
            printf("%lf\n", c);      
    }   
    return 0;
}
