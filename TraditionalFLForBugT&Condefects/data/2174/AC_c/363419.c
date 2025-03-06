#include<stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            int y=round(a/b);
            printf("%d\n",y);
        }
        else printf("error\n");
    }
    return 0;
}
