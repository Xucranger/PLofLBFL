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
if(a>=0&&b>0||a<=0&&b<0)
	printf("%d\n",((a*10/b)+5)/10);
	else if(a<0&&b>0||a>0&&b<0)
        printf("%d\n",((a*10/b)-5)/10);
    else if(a==0)
        printf("%d\n",0);
  }
  }
    return 0;
}
