#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    double m,t[20];
    int a,i=0,j;
    while(scanf("%d",&a)!=EOF)
    {
      m=sin(a);
      for (int i=0;i<a;i++)
        m=sin(m);
        t[i]=m;
        i++;
    }
for(j=0;j<i;j++)
printf("%.6lf\n",t[j]);
    return 0;
}
