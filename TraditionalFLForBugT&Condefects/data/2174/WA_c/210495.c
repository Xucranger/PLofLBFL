#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            if(((a*10/b)%10)>=5)
			printf("%d",a/b+1);
			else printf("%d",a/b);
        }
        else
          printf("error\n");
      }
      return 0;
  }            
