#include<stdio.h>
#define P 0.5
int main()
{
    int a,b,c;
    float m;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            m=(a*1.0)/b;c=(a/b);
            if((m-c)<=P)
            printf("%d\n",c);
            else printf("%d\n",++c);
        }
    else
        printf("error");
    }
    return 0;
}
