#include <stdio.h>
int main()
{
    int a,b,t=0;
    while(~scanf("%d%d",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else
            printf("%d\n",a/b);
    }
    return 0;
}
