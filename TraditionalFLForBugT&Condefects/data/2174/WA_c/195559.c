#include<stdio.h>
int main()
{
    int  m;
    double a,b;
    while(~scanf("%lf %lf",&a,&b));
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
