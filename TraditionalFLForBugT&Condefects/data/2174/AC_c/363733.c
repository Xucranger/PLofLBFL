#include <stdio.h>
int main()
{
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF)
    {
        float c;
        if(b!=0)
        {
        c=(a*1.0/b)-a/b;
        if(c<0.5)
            printf("%d\n",a/b);
            else
                printf("%d\n",a/b+1);
        }
        else
            printf("error\n");
    }
    return 0;
}
