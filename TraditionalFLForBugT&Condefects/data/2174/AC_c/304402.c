#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error");
        else
        {
        int c;
        c=a%b;
        if(2*c>=b)
        printf("%d",a/b+1);
        else printf("%d",a/b);
        }
        printf("\n");
     }
}
