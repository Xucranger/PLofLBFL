#include<stdio.h>
int main()
{
    int a,b;
    int c,d,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
        printf("error\n");
        else
        {
            c=a/b;
            d=a%b;
            e=(d*10)/b;
            if(e>=5)
              printf("%d",c+1);
            else
            printf("%d\n",c);
        }    
    }
    return 0;
}
