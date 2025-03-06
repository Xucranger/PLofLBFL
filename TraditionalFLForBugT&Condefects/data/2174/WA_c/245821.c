#include<stdio.h>
int main()
{
  int a,b,d;
  float c;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
    if(b==0)
   {
       printf("error");
   }
  else
    {
    c=a*1.0/b;
    d=c+0.5;
    printf("%d",d);
    }
  }
}
