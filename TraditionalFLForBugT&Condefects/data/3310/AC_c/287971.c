#include<stdio.h>
#include<math.h>
double n;
double fun(double x)
{
    double t;
    if(x==0)
    {
        t=sin(n);
        return t;
    }
    else
    {
      t=sin(fun(x-1));
      return t;
    }
}
int main()
{
    while( scanf("%lf",&n)!=EOF)
    {
        printf("%.6lf\n",fun(n));
    }
}
