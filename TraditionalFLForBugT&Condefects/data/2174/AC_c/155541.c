#include<stdio.h>
int main()
{
    int a,b,c,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            {
                e=a/b;
                c=a%b;
        if(c<(b*.5))
            printf("%d\n",e);
        else
            {
                e=e++;
                printf("%d\n",e);
            }
            }
    }
}
