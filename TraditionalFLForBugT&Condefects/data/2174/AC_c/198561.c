#include <stdio.h>
int main()
{
    float a,b,k;
    int c;
    while(~scanf("%f%f",&a,&b))
    {
    if(b!=0)
    {
    k=a/b;
    c=(int)(k+0.5);
    printf("%d\n",c);
    }
    else
    printf("error\n");
    }
}
