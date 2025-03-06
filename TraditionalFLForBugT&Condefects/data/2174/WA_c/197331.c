#include<stdio.h>
int main()
{
    int a,b;
    float s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            s=(1.0*a)/b;
            printf("%.f\n",s);
        }
        if(b==0)
            printf("error\n");
    }
    return 0;
}
