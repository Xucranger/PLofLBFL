#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    double n,m;
    while(~scanf("%lf%lf",&n,&m))
    {
        if(m==0)
            printf("error\n");
        else if(n==0)
            printf("0\n");
        else
            printf("%d\n",(int)(n/m+0.5));
    }
}
