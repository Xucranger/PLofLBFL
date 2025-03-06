#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<2;i++)
    {
        if(a[i][1]==0)
            printf("error\n");
        else
               printf("%d\n",a[i][0]/a[i][1]);
    }
return 0;
}
