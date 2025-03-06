#include<stdio.h>
int main()
{
  float a,b;
  int A,B,i,r,w,v;
  while(scanf("%f %f",&a,&b)!=EOF)
  {
    A=a;
    B=b;
    if(b==0)
        printf("error\n");
    else
    {
       if(a*b>=0)
         {i=A/B;
          if((a/b-i)<0.5)
            r=i;
          else
            r=i+1;
          printf("%d\n",r);
         }
        else
           {
             w=A/B;
             if((a/b-w>-0.5))
                v=w;
             else
                v=w-1;
             printf("%d\n",v);
           }
    }
  }
  return 0;
}
