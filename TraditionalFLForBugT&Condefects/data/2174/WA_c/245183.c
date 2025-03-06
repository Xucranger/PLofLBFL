#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            if(a*1.0/b-a/b<0.5)
                printf("%d",a/b);
            else
                printf("%d",a/b+1);
        }
        else
            printf("error");
    }
    return 0;
}
