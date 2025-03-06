#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
            printf("%d\n",(a+1)/b);
    }
    return 0;
}
