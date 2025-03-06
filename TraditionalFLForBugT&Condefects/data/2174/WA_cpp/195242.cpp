#include<stdio.h>
#include<string.h>
int main(void)
{
    float a,b;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            printf("%.0f\n",a/b);
    }
    return 0;
}
