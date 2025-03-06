#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    double F[10000][20];
    for(j=1;j<=3;j++)
    {
    scanf("%d",&n);
    F[0][j]=sin(n);
    for(i=1;i<=n;i++)
    {
        F[i][j]=sin(F[i-1][j]);
        }
    printf("%lf\n",F[n][j]);
}
}
