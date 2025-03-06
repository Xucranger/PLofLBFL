#include<stdio.h>
int main()
{
    float a,b,c;
    int d;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
             c=a/b+0.5;
             d=c;
             printf("%d",d);
        }
        else
        printf("error");
    }
}
