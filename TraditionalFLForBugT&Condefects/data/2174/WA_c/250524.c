#include<stdio.h>
  int main()
  {
   int a,b;
   double c;
   scanf("%d %d",&a,&b);
    if(b==0)
  {
    printf("error\n");}
   else if(b!=0)
   {
   c=a*1.0/b;
   printf("%.2lf\n",c);}
   return 0;
  }
