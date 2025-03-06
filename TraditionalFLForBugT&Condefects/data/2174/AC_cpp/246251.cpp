#include <stdio.h>
int main()
{
    int a,b,n;
    float s;
    while((scanf("%d %d",&a,&b)!=EOF))
    {
        if(b==0)
            printf("error\n");
        else
        {
            s=1.0*a/b;
            n=(int)(s+0.5);
            printf("%d\n",n);
        }
    }
    return 0;
}
