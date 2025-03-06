#include<stdio.h>
int main()
{
    int i,n,b,c,j;
    int a[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        if(a[i][1]==0)
       {
         printf("error!\n");
       }
        else
        {
        c=(a[i][0]+a[i][1]/2)/a[i][1];
            printf("%d\n",c);
        }
    }
    return 0;
}
