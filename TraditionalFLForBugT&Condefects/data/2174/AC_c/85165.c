#include <stdio.h>
int main()
{
    int a,b,c=0;
    while(scanf("%d%d",&a,&b)==2)
    {
        if(b==0)
        printf("error\n");
        else
        {
             c=(a+b/2)/b;
             printf("%d\n",c);
        }
    }
}
