#include<stdio.h>
int main()
{
    float a,b;
    int x;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        if(a==0&&b!=0)
            printf("%d\n",a);
        if(a*b<0)
            {
                x = (int)(a/b-0.5);
                printf("%d\n",x);
            }
        if(a*b>0)
            {
                x = (int)(a/b+0.5);
                printf("%d\n",x);
            }
    }
    return 0;
}
