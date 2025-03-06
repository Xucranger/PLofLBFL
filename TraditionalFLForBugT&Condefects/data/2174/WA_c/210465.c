#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n;
    //int m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            int m=a/b;
            m=(int)(m+0.5);
            printf("%d\n",m);
        }
        else
          printf("error\n");
      }
      return 0;
  }            
