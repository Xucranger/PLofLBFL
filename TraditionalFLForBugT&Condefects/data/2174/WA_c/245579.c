#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            if((a>=0&&b>0)||(a<=0&&b<0))
                printf("%d",(a+(b/2))/b);
            else
                printf("%d",(a-(b/2))/b);
        }
    }
    return 0;
}
