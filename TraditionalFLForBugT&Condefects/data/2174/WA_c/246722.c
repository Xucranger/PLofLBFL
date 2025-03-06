#include<stdio.h>
int main()
{
    int a,b,m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {    
            printf("error");
            exit(0);
        }
        m=(a+b/2)/b;
        printf("%d",m);
    }
    return 0;
}
