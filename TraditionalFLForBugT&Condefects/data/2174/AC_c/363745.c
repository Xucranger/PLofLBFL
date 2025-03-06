#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
            {
                c=((int)(a/(b*1.0)+0.5)>(int)(a/(b*1.0))?(int)((a/(b*1.0))+1):(int)(a/(b*1.0)));
                printf("%d\n",c);
            }
        else
            printf("error\n");
    }
    return 0;
}
