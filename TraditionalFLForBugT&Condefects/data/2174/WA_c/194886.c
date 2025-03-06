#include<stdio.h>
int main ()
{
    int i,n;
    float m,a,b,c,d;
    scanf("%f%f\n%f%f",&a,&b,&c,&d);
    if(a==0)
        printf("0\n");
    else if(b==0)
        printf("error\n");
    else
    {
        m=a/b;
        m+=0.5;
        n=(int)m;
        printf("%d\n",n);
    }
    if(c==0)
        printf("0");
    else if(d==0)
        printf("error");
    else
    {
        m=c/d;
        m+=0.5;
        n=(int)m;
        printf("%d",n);
    }
    return 0;
}
