#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
     {
         if(b!=0)
         {
             if((a%b)*10/b>=5)
            printf("%d\n",(a/b)+1);
              else if((a%b)*10/b<5)
                printf("%d\n",a/b);
         }
         else
        printf("error\n");
     }
     return 0;
}
