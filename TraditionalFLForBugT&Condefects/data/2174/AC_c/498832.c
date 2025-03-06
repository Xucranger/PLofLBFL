#include <stdio.h>
int main()
{
 int a,b,d;
 float c,p;
 a=0;
 b=0;
 while(scanf("%d%d",&a,&b)!=EOF)
 {
  if(b==0)
  {
   printf("error\n");
   continue;
  }
  c=1.0*a/b;
  d=a/b;
  p=c-d;
  if(p>0.49999999)
   d=d+1;
  printf("%d\n",d);
 }  
}
