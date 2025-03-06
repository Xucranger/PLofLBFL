#include<stdio.h>
int main()
{ int a,b,d;
  float c;
  if(b=0)
    printf("error\n");
  else
    {
    while (scanf("%d %d",&a,&b)!=EOF)
  {  c=a*1./b;
     d=(int)((c+0.5));
    printf("%d",d);
  }
    }
}
