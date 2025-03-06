#include<stdio.h>
void main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    if(b==0)
        printf("error");
    else
    {
        c=a*1.0/b*1.0;
        printf("%.0f",c);
    }
}
