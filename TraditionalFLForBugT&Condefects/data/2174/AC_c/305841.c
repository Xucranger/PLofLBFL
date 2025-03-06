#include<stdio.h>
#include<string.h>
int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b)!=EOF)
    {
    if(b == 0)
        printf("error\n");
    else {
        printf("%d\n",(int)(a/b+0.5));
        }
}
}
