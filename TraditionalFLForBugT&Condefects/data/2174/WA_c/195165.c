#include<stdio.h>
int main()
{
    float a,b,m;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            m=(int)((a/b)+0.5);
            printf("%.0f\n",m);
        }
    else
        printf("error");
    }
    return 0;
}
