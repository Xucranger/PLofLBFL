#include<stdio.h>
#include<math.h>
#include<string.h>
int n,m,k;
double a[100002]={0};
void caozuo()
{
    memset(a, 0, sizeof(a));
    int i;
    a[0]=sin(n);
    for(i=1;i<=n;i++)
        a[i]=sin(a[i-1]);
    printf("%.6lf\n",a[n]);
    return;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        caozuo();
    }
    return 0;
}
