#include<stdio.h>
int main()
{
    int a,b,c;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (b==0)
            printf("error");
        else
        {
            if (a*b>0)
                c=(1.0*a)/b+0.5;
            else
                c=(1.0*a)/b-0.5;
                printf("%d\n",c);
        }
    }
    return 0;
}
