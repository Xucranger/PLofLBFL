#include<stdio.h>
int main()
{
    int a,b,n;
    float m,q;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
    if(b!=0)
    {
    m=1.0*a/b;
    n=a/b;
    q=m-n;
    if(q>=0.5)
        n++;
    else n=n;
    printf("%d",n);
    }
    else if(b==0)
        printf("error");
    }
    printf("\n");
}
