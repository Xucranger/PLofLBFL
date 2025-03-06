#include <stdio.h>
int main()
{
    float a,b;
    int c;
    while(~scanf("%f%f",&a,&b))
    {
    scanf("%f %f",&a,&b);
    if(b!=0)
    {
    c=a/b;
    c=(int)(c+0.5);
    printf("%d",c);
    }
    else
    printf("error");
    }
}
