#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            for(d=0,j=1;j<=b;j++)
                {
                    scanf("%d",&c);
                    d+=c;
                }
            printf("%d\n",d);
        }
    return 0;
}
