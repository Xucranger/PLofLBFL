#include <stdio.h>
int main()
{  int i;
   double sum=0;
   double a;
   for(i=0;i<12;i++)
   {
       scanf("%lf",&a);
       sum+=a;
   }
   printf("$%.2lf",sum/12);
   return 0;
}
