#include<stdio.h>
  int main()
  {
   int a,b,d;
   double c;
   scanf("%d %d",&a,&b);
    if(b==0)
  {
    printf("error\n");}
   else if(b!=0)
   {
   c=a*1.0/b;
   d=(int)(c+0.500);
   printf("%d\n",d);}
   return 0;
  }
