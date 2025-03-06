#include <stdio.h>
#include <math.h>
int main()
{
  float c;
  int a,b;
   scanf("%f %f",&a,&b);
   if(b=0)
     printf("error");
   else
     c=a*1.0/b;
   printf("%f",round(c));
   return 0;
}
