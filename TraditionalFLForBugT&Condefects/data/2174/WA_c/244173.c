#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(b==0)
    {
        printf("error");
    }
    else
    {
        c=10*a/b%10;
        if(c>=5)
        {
            printf("%d",a/b+1);
        }
        else
        {
            printf("%d",a/b);
        }
    }
    return 0;
}
