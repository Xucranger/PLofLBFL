#include<stdio.h>
int main()
{int a,b,c;
 while(scanf("%d%d",&a,&b)!=EOF)
 {
 if(b!=0)
  {c=a*1./b;
  c=(c+0.5);
   printf("%d\n",c);}
 if(b==0)
   {
       printf("error");
   }}
 return 0;
}
