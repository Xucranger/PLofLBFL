#include<stdio.h>
#include<math.h>
int main()
{
        int n,i;
        double a[101];
        while(scanf("%d",&n)!=EOF)
        {
                a[0]=sin(n);
                for(i=1;i<=n;i++)
                a[i]=sin(a[i-1]);
                printf("%.6lf\n",a[i-1]);
        }
        return 0;
}
