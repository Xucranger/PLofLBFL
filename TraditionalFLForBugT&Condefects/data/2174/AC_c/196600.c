#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
            printf("error\n");
        else
        {
            a=(a+a%b) /b;
            printf("%d\n",a);
        }
    }
    return 0;
}
