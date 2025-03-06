#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&c);
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        c==a/b;
        if(c==0)
        printf("error");
        else
        printf("%d",c);
    }
}    
