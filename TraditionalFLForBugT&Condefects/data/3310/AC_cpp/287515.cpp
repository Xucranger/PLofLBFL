#include <iostream>
#include<math.h>
#include <stdio.h>
using namespace std;
double f(int n,int m);
int main()
{
    double s;
    int n;
    while(cin>>n)
    {
        s=f(n,n);
        printf("%.6lf\n",s);
    }
    return 0;
}
double f(int n,int m)
{
    if(n==0)
        return sin(m);
    else
        return sin(f(n-1,m));
}
