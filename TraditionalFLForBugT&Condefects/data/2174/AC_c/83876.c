#include<stdio.h>
int main()
{  float a,b,i;
   float j;
   int k;
   while(scanf("%f%f",&a,&b)!=EOF)
   {  if(b!=0)
      {  i=a/b;
         j=i+0.5;
         k=a/b;
         if(j<k+1)
         printf("%d\n",k);
         else
         printf("%d\n",k+1);
      }
      else
        printf("error\n");
   }
   return 0;
}
