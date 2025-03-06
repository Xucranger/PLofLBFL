#include<stdio.h>
int main()
{
    int a,b,x;
    while(scanf("%d %d",&a,&b)!=EOF)
    if(b==0)
{
    printf("ERROR");
}
    else
{       x=(a+b/2)/b;
        printf("%d",x);
}
return 0;
}
