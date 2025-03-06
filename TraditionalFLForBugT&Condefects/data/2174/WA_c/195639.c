#include<stdio.h>
int main()
{
  int a,b;
  float t;
  while(scanf("%d%d",&a,&b)!=EOF)
  {
      if(b!=0)
      {
          t=(int)(0.5+a/b);
          printf("%d\n",t);
      }
      else
        printf("error\n");
  }
  return 0;
}
