#include <stdio.h>
int main()
{
   float a,b,c;
   int d;
   while(scanf("%f%f",&a,&b)!=EOF)
   {if(b==0)
   printf("error\n");
   else
   {
       c=a/b;
       d=a/b;
       if((c-d)>=0.5)
       d=d+1;
       printf("%d\n",d);
   }
   }
return 0;
}
