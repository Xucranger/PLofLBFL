#include <stdio.h>
int main()
{
    int a,b,d;
    float c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {  c=1.0*a/b;
            d=c+0.5;
        printf("%d\n",d);
        }
        else
            printf("error");
    }
    return 0;
}
