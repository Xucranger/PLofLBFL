#include<stdio.h>
int main()
{
    float a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        float i;
        i=(int)(a*1.0/b+0.5);
        if(b==0)
        {
            printf("error\n");
        }
        else
        {
            printf("%.0f\n",i);
        }
    }
}
