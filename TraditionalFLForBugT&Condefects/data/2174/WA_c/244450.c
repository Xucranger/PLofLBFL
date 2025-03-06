#include<stdio.h>
int main()
{
    int a,b;
    float c;
    while (scanf("%d%d",&a,&b)!=EOF)
    {
        if (b==0)
            printf("error");
        else
        {
            c=(1.0*a)/b;
            printf("%.f",c);
        }
    }
    return 0;
}
