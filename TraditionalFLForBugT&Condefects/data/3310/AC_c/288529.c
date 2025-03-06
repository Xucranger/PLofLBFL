#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i;
    double  f[1000],jg[1000];
    while(scanf("%d",&n)!=EOF)
    {
        f[0]=sin(n);
                if(n==0)
            printf("%lf\n",f[0]);
            else
            {
                for(x=1;x<=n;x++)
                  f[x]=sin(f[x-1]);
                  printf("%lf\n",f[n]);
            }
    }
    return 0;
}
