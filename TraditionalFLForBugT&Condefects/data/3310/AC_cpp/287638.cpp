#include<cstdio>
#include<cmath>
double n;
double caculate(double x)
{
    if(x==0)
        return sin(n);
    else if(x>0)
    {
        return sin(caculate(x-1));
    }
    else
        return sin(x);
}
int main()
{
    double m,i,j;
    double f;
    while(scanf("%lf",&n)!=EOF)
    {
        printf("%lf\n",caculate(n));
    }
    return 0;
}
