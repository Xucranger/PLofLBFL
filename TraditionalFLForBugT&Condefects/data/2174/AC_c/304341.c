#include<stdio.h>
int main()
{
    int a,b,c,x;
    c=0.5;
    while((scanf("%d %d",&a,&b))!=EOF)
    {
        if(b==0)
        {
            printf("error\n");
            continue;
        }
        x=(a+b/2)/b;
        printf("%d\n",x);
    }
    return 0;
}
