#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
#define PI 3.1415926
int main()
{
   int n;
   double x,f[100];
   while(~scanf("%d",&n))
   {
       f[0]=sin(n);
      for(int i=1;i<=n;i++)
    {
        f[i]=sin(f[i-1]);
        x = f[i];
    }
    printf("%.6lf\n",x);
   }
   return 0;
}
