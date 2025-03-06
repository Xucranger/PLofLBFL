#include<stdio.h>
int main()
{
    int a,b,c,d,n,m;
    scanf("%d %d\n",&a,&b);
    scanf("%d %d",&c,&d);
    if(b==0)
    printf("error\n");
    else
    {n=a/b;
    printf("%d\n",n);}
    if(d==0)
    printf("error");
    else
   { m=c/d;
    printf("%d",m);}
}
