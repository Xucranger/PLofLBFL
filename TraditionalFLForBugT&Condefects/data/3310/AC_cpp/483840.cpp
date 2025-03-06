#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n,temp;
    int a;
    while(scanf("%d",&a)!=EOF)
    {
      n=sin(a);
      for (int i=1;i<=a;i++)
        n=sin(n);
      temp=n;
      printf("%.6lf\n",n);
    }
    return 0;
}
