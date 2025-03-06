#include<stdio.h>
int main()
{  int a,b;
   while(scanf("%d%d",&a,&b)!=EOF)
   {  if(b)
      {  if((a*10/b-a/b*10)/5)
           printf("%d",a/b+1);
         else
           printf("%d",a/b);
      }
      else
         printf("error");  
      printf("\n");
   }
   return 0;
}
