#include<stdio.h>
int main()
{
    float a,b,c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            c=(int)(a/b*10+5)/10;
            printf("%.f\n",c);
        }
        else
        printf("error");
    }
    return 0;
}
