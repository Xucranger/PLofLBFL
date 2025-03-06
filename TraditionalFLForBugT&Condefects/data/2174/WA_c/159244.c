#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,t=0;
    scanf("%d",&a);
    scanf("%d",&b);
    if(b==0)
    {
        printf("error");
        return 0;
    }
    t=(a+b/2)/b;
    printf("%d",t);
    return 0;
}
