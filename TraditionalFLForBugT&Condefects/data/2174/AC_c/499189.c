#include<stdio.h>
int main()
{
    int a,b,m;
    float x;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        if(a==0&&b!=0)
            printf("%d\n",a);
        if(a*b<0)
            {
                x = (float)a/b-0.5;
                m = (int)x;
                printf("%d\n",m);
            }
        if(a*b>0)
            {
                x = (float)a/b+0.5;
                m = (int)x;
                printf("%d\n",m);
            }
    }
    return 0;
}
