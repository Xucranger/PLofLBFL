#include <stdio.h>
#include <math.h>
int main()
{
      int a,b,d;
      float c;
     while(scanf("%d%d",&a,&b)!=-1)
    {
             if(b==0)
                 printf("error\n");
             else
              { c=a*1.0/b;
              d=a/b;
              if((c-d)<0.5)
                 printf("%d\n",d);
                 else
                 printf("%d\n",d+1);
                 } 
     }
return 0;
}
