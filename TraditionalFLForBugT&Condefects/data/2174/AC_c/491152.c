#include<stdio.h>
void main()
{
 int a,b,x;
 while(scanf("%d %d",&a,&b)!=-1)
 {
  if(b==0)
   printf("error\n");
  else
   {
    x=(a*10/b+5)/10;
          printf("%d\n",x);
      }
 }
}
