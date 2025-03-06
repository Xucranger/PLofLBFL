#include<stdio.h>
void main()
{
    float a,b;
    int c;
    while(scanf("%f",&a)!=EOF)
    {
        scanf("%f",&b);
        if(b==0)
            printf("error\n");
        else
        {
            c=a/b+0.5;
            printf("%d\n",c);
        }
    }
}
