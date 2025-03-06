#include<stdio.h>
int main()
{
    int a,b,s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
                printf("error");
        else
        {
                s=a/b;
        printf("%d",s);
        }
         printf("\n");
    }
    return 0;
}
