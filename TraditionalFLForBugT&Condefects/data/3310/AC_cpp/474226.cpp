#include <iostream>
using namespace std;
#include<math.h>
int main()
{   int n,x;
    double f[105];
    while(cin>>n)
    {
    f[0]=sin(n);
        for(x=1;x<=n;x++)
            f[x]=sin(f[x-1]);
        printf("%.6lf\n",f[n]);}
    }
