#include<stdio.h>
void main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    if(b==0)
        printf("error");
    else
        printf("%.0f",(a+0.5)/b);
}
