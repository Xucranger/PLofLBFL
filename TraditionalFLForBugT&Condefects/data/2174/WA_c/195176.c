#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b;
  while(scanf("%d %d\n",&a,&b)!=EOF)
  {
      if(b!=0)
        printf("%d\n",a/b);
      else
        printf("error");
  }
  return 0;
}
