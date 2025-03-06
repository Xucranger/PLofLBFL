#include<stdio.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
      {
          if(b==0)
            printf("error\n");
          else if(a%b==0)
            printf("%d\n",a/b);
          else if(((float)(a/b)-a/b)<0.5)
            printf("%d\n",(int)(a/b));
          else if(((float)(a/b)-a/b)>=0.5)
            printf("%d\n",(int)((a/b)+0.5));
      }
      return 0;
}
