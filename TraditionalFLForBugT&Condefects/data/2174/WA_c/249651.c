#include<stdio.h>
int main()
 { int a,b;
   while(scanf("%d %d",&a,&b)!=EOF)
     { if(!b)
         printf("ERROR\n");
       else
         printf("%d",a/b);
      }
 }
