#include <stdio.h>
#include <math.h>
int main()
{
   float a,b;
   while(scanf("%f%f",&a,&b)!=EOF)
   {
       if(b==0)
       {
           printf("error\n");
           continue;
       }
   printf("%.f\n",round(a/b));
   }
   return 0;
}
