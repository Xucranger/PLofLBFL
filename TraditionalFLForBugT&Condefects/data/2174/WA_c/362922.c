#include<stdio.h>
void main()
{
    int a,b,c,d,i,j;
        scanf("%d%d",&a,&b);
        scanf("%d%d",&c,&d);
        if(b==0)
            printf("error\n");
        else
            printf("%d\n",a/b);
        if(d==0)
            printf("error\n");
        else
            printf("%d",c/d);
}
