#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
    if(b==0)
{
    printf("error\n");
}
    else
{       x=(a+b/2)/b;
        printf("%d\n",x);
}
}
