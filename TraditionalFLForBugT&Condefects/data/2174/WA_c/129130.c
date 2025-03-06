#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a1,b1,c1,a2,b2,c2;
    scanf("%d%d",&a1,&b1);
    scanf("%d%d",&a2,&b2);
    if(b1==0)
        printf("error");
    else
    {
        c1=(int)(a1*1.0/b1+0.5);
        printf("%d\n",c1);
    }
    if(b2==0)
        printf("error");
    else
    {
        c2=(int)(a2*1.0/b2+0.5);
        printf("%d\n",c2);
    }
    return 0;
}
