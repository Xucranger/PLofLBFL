#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {   c=a/b;
            if(1.0*(a-c*b)/b>b/2.0)
            c=c+1;
            printf("%d\n",c);
        }
        else
        printf("error");
    }
    return 0;
}
