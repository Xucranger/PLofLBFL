#include<stdio.h>                       
int main ()
{
    int n;
    float m,a,b,c,d;
    while(~scanf("%f%f",&a,&b))
    {
        if(b==0)
            printf("error\n");
        else
        {
            m=a/b;
            m+=0.5;
            n=(int)m;
            printf("%d\n",n);
        }
    }
    return 0;
}
