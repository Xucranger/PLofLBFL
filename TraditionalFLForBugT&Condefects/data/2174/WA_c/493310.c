#include<stdio.h>
int main()
{
    int a,b,x;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        if((a>0&&b>0)||(a<0&&b<0))
        {
            x = (int)((a/b)+0.5);
            printf("%d\n",x);
        }
        if((a<0&&b>0)||(b<0&&a>0))
            {
            x = (int)((a/b)-0.5);
            printf("%d\n",x);
            }
    }
    return 0;
}
