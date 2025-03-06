#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2)
    {
        if(b!=0)
        printf("%d\n",a/b);
        else
            printf("error\n");
    }
    return 0;
}
