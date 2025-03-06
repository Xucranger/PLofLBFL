#include<stdio.h>
#include<math.h>
int main()
{   int n,x;
double f[105];
    while(scanf("%d",&n)!=EOF)
    {f[0]=sin(n);
    for(x=1;x<=n;x++)
    f[x]=sin(f[x-1]);
    printf("%lf\n",f[n]);}
    }
