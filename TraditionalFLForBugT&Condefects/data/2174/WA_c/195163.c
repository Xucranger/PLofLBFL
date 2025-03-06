#include<stdio.h>
int main()
{
    float a,b,m;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            m=(a*1.0)/b+0.5;
            m=(int)(m);
            printf("%.0f\n",m);
        }
    else
        printf("error");
    }
    return 0;
}
