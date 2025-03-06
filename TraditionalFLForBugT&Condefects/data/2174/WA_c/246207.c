#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d%d",&a,&b);
    c=(double)a/b;
    if((int)(c*10)%10>=5)
    {
        printf("%d",(int)c+1);
    }
    else
    {
        printf("%d",(int)c);
    }
}
