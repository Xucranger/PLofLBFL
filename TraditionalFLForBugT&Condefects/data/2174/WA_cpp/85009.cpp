#include<stdio.h>
int main()
{  
   float a,b;
   int c;
   while(scanf("%f %f",&a,&b)!=EOF)
   {
       if(b!=0)
               c=int(a/b+0.5);
   printf("%d\n",c);
       if(b==0)
      printf("error\n");
   }
}              
