#include<stdio.h>
int main()
{
    int a,b;
    int c,d,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        c=((float)a/b+0.5);
        d=((float)(-a)/(-b)+0.5);
        e=((float)a/b-0.5);
        if(b==0)
            printf("error\n");
        else
        {
            if(a>=0&&b>0)
                printf("%d",c);
            else if(a<=0&&b<0)
                printf("%d",d);
            else
                printf("%d",e);
        }
    }
    return 0;
}
