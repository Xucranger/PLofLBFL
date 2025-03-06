#include<stdio.h>
int main()
{
    int a,b;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            b=a/b;
            printf("%d",b);
        }
    }
    return 0;
}
