#include <stdio.h>
int main()
{
    int a,b,c,i;
    for(i=0;i<100;i++)
    {
        scanf("%d %d",&a,&b);
        if(b!=0)
        {
            c=(int)(1.0*a/b+0.5);
            printf("%d\n",c);
        }
        else
            printf("error");
    }
}
