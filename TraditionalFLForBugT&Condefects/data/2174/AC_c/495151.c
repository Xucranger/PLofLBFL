#include <stdio.h>
int main()
{
 int a=0,b=0,f;
 float d,w;
 while(scanf("%d%d",&a,&b)!=EOF)
 {
  if(b==0)
  {
   printf("error\n");
   continue;
  }
  d=1.0*a/b;
  f=a/b;
  w=d-f;
  if(w>0.49999999)
   f=f+1;
  printf("%d\n",f);
 }  
}
