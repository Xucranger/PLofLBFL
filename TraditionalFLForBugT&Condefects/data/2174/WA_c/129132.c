#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1,b1,c1;
    scanf("%d%d",&a1,&b1);
    if(b1==0)
        printf("error\n");
    else
    {
        c1=(int)(a1*1.0/b1+0.5);
        printf("%d\n",c1);
    }
    return 0;
}
