#include<stdio.h>
int main()
{
    float a,b;
    float c;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error\n");
        else
        {
        c= ((int)(a/b+0.5));
        printf("%.0f\n",c);
        }
    }
}
