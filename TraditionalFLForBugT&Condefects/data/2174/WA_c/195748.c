#include<stdio.h>
int main()
{
    int a,b,res;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            {
                res=a/b;
                printf("%d\n");
            }
    }
}
