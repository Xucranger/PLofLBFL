#include<stdio.h>
int main()
{
  int a,b,t;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
      if(b!=0)
      {
          t=0.5+a/b;
           printf("%d\n",t);
      }
      else
        printf("error");
  }
  return 0;
}
