#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    double a[120];
    while(cin>>n)
    {
        a[0] = sin(n);
        for(int i = 1;i <= n; i++)
        {
            a[i] = sin(a[i - 1]);
        }
        if(n == 0)
            printf("0.000000\n");
        else
            printf("%.06lf\n",a[n]);
    }
}
