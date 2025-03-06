#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(b==0)
       {
         printf("error");
         printf("\n");
        }
         else  
         {
               c=a%b;
               if(c>=0.5*b)
             printf("%d",a/b+1);
             else
             printf("%d",a/b);
          }
    }
}
