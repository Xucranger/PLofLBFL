#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
        c=(int)(a*1.0/b+0.5);
        printf("%d\n",c);
        }
        else
        printf("error\n");
    }
    return 0;
}
