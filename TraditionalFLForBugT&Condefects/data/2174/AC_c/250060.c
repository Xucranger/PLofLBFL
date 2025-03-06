#include<stdio.h>
int main()
{
    int a,b,d;
    float c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
           {
            c=(1.0*a)/b;
            d=(c+0.5)/1;
             printf("%d\n",d);
           }
    }
}
