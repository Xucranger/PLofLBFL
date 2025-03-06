#include<stdio.h>
int main()
{  int a,b,s;
   scanf("%d %d",&a,&b);
   if(b==0)
   printf("error ");
   else if((a/b)==0)
   printf("0");
   else
   s=a/b;
   printf("%d",s);
}
