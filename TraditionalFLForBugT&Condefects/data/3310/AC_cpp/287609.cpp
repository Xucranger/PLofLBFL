#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
double n;
double f(double x)
{
    if(x==0)
        return sin(n);
    else
        return sin(f(x-1));
}
int main()
{
    //double n;
    while(cin>>n)
    {
        double ans=0;
        ans=f(n);
        printf("%.6f\n",ans);
    }
}
