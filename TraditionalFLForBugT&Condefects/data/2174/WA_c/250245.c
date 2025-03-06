#include<stdio.h>
int main()
{ int m,a,b;
  while(scanf("%d",&a)!=EOF)
  { scanf("%d",&b);
  a=10*a;
  if(b==0)
	  printf("error");
  else 
  {m=a/b;
  if(m%10>4)
	  printf("%d",m/10+1);
  else
      printf("%d",m/10);}}}
