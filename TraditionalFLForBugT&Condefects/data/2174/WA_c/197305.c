#include<stdio.h>
int main()
{
    int a,b,s;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            s=a/b;
            printf("%d",s);
        }
        if(b==0)
            printf("error");
    }
    return 0;
}
