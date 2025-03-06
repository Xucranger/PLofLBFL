#include <stdio.h>
int main()
{
    int a,b,d;
    double c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
         printf("error");
        else
        {
            c=a*1.0/b;
            c=c+0.5;
            d=c;
            printf("%d\n",d);
        }
    }
    return 0;
}
