#include<stdio.h>
int main()
{
    int a,b,d;
    double c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        if(a==0&&b!=0)
            printf("%d\n",a);
        if(a*b>0)
                c = (double) a/b+0.5;
                d = (int)c;
                printf("%d\n",d);
        if(a*b<0)
                 c = (double) a/b-0.5;
                d = (int)c;
                printf("%d\n",d);
    }
    return 0;
}
