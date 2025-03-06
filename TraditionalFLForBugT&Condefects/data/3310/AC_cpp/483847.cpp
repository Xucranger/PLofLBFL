#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
    double n,temp;
    int a;
    while(scanf("%d",&a)!=EOF)
    {
      n=sin(a);
      for (int i=0;i<a;i++)
        n=sin(n);
      temp=n;
        printf("%.6lf\n",temp);
    }
    return 0;
}
