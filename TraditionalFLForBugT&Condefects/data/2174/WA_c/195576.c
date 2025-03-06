#include<stdio.h>
int main()
{
	  int a,b;
	  while(scanf("%d%d",&a,&b)!=EOF);
	  {
	  	if(b==0)
	  	  printf("error");
	  if(b!=0)
	  	  printf("%d",a/b);
	  }
	  return 0;
 } 
