#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        float i;
        i=a*1.0/b;
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
