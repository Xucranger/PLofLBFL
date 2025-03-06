#include<stdio.h>
int main()
{
    int x[2][2];
    int i,j,a;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        scanf("%d",&x[i][j]);
    }
    for(i=0;i<2;i++)
    {
        if(x[i][1]==0)
        printf("error\n");
        else
        {
            a=x[i][0]/x[i][1];
            printf("%d\n",a);
        }
    }
    return 0;
}
