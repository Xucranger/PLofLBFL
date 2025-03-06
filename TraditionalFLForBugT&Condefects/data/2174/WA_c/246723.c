#include<stdio.h>
int main()
{
    int a,b,m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        {    
            printf("error\n");
            exit(0);
        }
        m=(a+b/2)/b;
        printf("%d\n",m);
    }
    return 0;
}
