#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
    if(b==0)
    {
        printf("error\n");
    }
    else if(a==0)
    printf("0\n");
    else
    printf("%.0f\n",(a+0.5)/b);
}
    }
