#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    double f[1000];
    while(scanf("%d",&n)!=EOF)
    {
        f[0]=sin(n);
        if(n<=1)
        {
            f[n]=sin(f[0]);
            printf("%.6lf\n",f[n]);
        }
        else
        {
           for(i=1;i<=n;i++)
            {
                f[i]=sin(f[i-1]);
            }
        printf("%.6lf\n",f[n]);
        }
    }
    return 0;
}
