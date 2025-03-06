#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    double m,t;
    int a;
    while(~scanf("%d",&a))
    {
      m=sin(a);
      for (int i=0;i<a;i++)
        m=sin(m);
      printf("%.6lf\n",m);
    }
    return 0;
}
