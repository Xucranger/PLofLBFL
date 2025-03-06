#include <stdio.h>
#include <stdlib.h>
int main()
{  int a,b,c;
   float d,e,f;
   while(scanf("%d %d",&a,&b)!=EOF)
   {
       if(b==0)
        {
            printf("error\n");
            continue;
        }
        c=a/b;
       d=1.0*a;
       e=1.0*b;
       f=d/e-c;
       if(f>0.4999999)
        c=c+1;
        printf("%d\n",c);
   }
    return 0;
}
