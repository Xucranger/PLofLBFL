#include <stdio.h>
#include <math.h>
int main()
{
   float a,b,c;
   while(scanf("%f%f",&a,&b)!=EOF)
   {
       if(b==0)
       {
           printf("error\n");
           continue;
       }
    c=a/b;
   printf("%.f\n",round(c));
   }
   return 0;
}
