#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=10*a/b%10;
    if(b==0)
    {
        printf("error");
    }
    else if(c>=5)
    {
        printf("%d",a/b+1);
    }
    else
    {
        printf("%d",a/b);
    }
    return 0;
}
