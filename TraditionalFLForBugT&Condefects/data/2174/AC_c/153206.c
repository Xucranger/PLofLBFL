#include<stdio.h>
int main()
{
    float a,b,s;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
        if(0==b)
        printf("error\n");
            else
               {
                    s=(int)(a/b*1.0+0.5);
                    printf("%.0f\n",s);
               }
    }
    return 0;
}
