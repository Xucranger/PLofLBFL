#include<stdio.h>
int main()
{
    int a,b,d;
    float c,e;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if(b==0)
          {
              printf("error");break;
              }
       else
        d=a/b;
        c=1.0*a/b;
        e=c-d*1.0;
        e=e*10;
    {
           if(e<5)
            printf("%d",d);
        else
          {
              d=d+1;
            printf("%d",d);
       }
    }
     }
  return 0;
}
