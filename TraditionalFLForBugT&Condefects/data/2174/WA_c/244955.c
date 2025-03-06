#include<stdio.h>
int main()
{
    int a[100][2];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
    }
     for(i=0;i<n;i++)
            if(a[i][1]!=0)
                printf("%d\n",a[i][0]/a[i][1]);
            else
                printf("error\n");
    return 0;
}
