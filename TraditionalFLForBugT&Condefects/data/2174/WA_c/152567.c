#include <stdio.h>
#include <stdlib.h>
#include "string.h"
int main()
{
  int a,b;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
      if(b==0)
    printf("error");
  else
  {
	printf("%d\n",((a*10/b)+5)/10);
  }
  }
    return 0;
}
