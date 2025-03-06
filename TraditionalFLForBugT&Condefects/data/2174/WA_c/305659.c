#include<stdio.h>
int main()
{
    int a,b,s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
             {
                    printf("error");
                printf("\n");
             }
        else
        {
                s=a/b;
                if(a%b>=(b/2))
        printf("%d",s+1);
        else printf("%d",s);
        printf("\n");
        }
    }
    return 0;
}
