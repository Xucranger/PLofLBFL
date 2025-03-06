#include<stdio.h>
int main()
{
    int  m;
    double a,b;
    scanf("%d %d",&a,&b);
    if(b==0)
    {
        printf("error");
    }
    else
    {
        m=a/b+0.5;
        printf("%d",m);
    }
}
