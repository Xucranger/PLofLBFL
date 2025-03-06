#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,n;
    double m;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b!=0)
        {
            m=a/b;
            //if(m-n>0.5)
             //  n=n+1;
            printf("%d\n",m);
        }
        else
          printf("error\n");
      }
      return 0;
  }            
