#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
      if(b!=0)
      {
        if(a%b>=b/2.0)
            c=a/b+1;
       else c=a/b;
        printf("%d\n",c);
      }
      else printf("error\n");
    }
}
