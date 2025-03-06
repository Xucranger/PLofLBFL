#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
double la(double a,double n)
{
    if(a==0) return sin(n);
    return sin(la(a-1,n));
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        double x=(double)n;
        printf("%.6lf\n",la(x,x));
    }
    return 0;
}
