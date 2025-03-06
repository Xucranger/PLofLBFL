#include <bits/stdc++.h>
using namespace std;
int x;
double f(int n)
{
    if(n==0)
        return sin(x);
    return sin(f(n-1));
}
int main()
{
    int n;
    while(cin>>n)
    {
        x=n;
        double a=f(n);
        printf("%.6lf\n",a);
    }
    return 0;
}
