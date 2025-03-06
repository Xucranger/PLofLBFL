#include<stdio.h>
int main()
{
    int a,b,d;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            d=a/b;
            c=a*1.0/b;
            if(c-d>=0.5)
                printf("%d\n",d+1);
            if(c-d<0.5)
                printf("%d\n",d);
        }
        if(b==0)
            printf("error\n");
    }
    return 0;
}
