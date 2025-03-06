#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,b,t;
  float c;
  while(scanf("%d %d",&a,&b)!=EOF)
    {
      if(b!=0)
      {
          c=0.5+1.0*a/b;
          t=(int)c;
          printf("%d\n",t);
      }
      else
        printf("error\n");
    }
  return 0;
}
