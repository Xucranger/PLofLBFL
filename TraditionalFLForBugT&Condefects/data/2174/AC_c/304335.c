#include<stdio.h>
int main()
{ int a,b,t,s;
   while(scanf("%d",&a)!=EOF)
   { scanf("%d",&b);
   if(b==0)
   printf("error\n");
   else
   { t=a/b;
      s=a%b;
    if((2*s)<b)
    printf("%d\n",t);
    else
    printf("%d\n",t+1);}}}
