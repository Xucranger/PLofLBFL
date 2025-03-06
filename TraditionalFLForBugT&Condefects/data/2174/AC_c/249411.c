#include<stdio.h>
int main()
{
    float  a,b,c;
    int g;
    while(~scanf("%f%f",&a,&b))
        if(b!=0)
    {
        c=a/b;
        c=c+0.5;
        g=c;
        printf("%d\n",g);
    }
    else
        printf("error\n");
}
