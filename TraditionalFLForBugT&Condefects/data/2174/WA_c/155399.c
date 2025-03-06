#include<stdio.h>
int main()
{int a,b;float c,d;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
  printf("error\n");
else
    {c=1.0*a/b;
  d=c-(int)c;
  if(d<0.5)
    printf("%d",(int)c);
  else
    printf("%d",(int)c+1);
  }
}
return 0;}
