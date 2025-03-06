#include<stdio.h>
    int main()
    {
        int a,b,c,e;
        while(scanf("%d%d",&a,&b)!=EOF)
        {
                if(b!=0)
                {
                   c=a/b;
                   e=a%b;
                   if(e>=a/2)
                   {
                       c=c+1;
                   }
                   printf("%d",c);
                }
                else
                    printf("error");
        }
        return 0;
    }
