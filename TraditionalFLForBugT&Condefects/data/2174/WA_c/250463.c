#include<stdio.h>
int main()
{
      float a,b;
     while(scanf("%f%f",&a,&b)!=-1)
    {
             if(!b)
                 printf("error\n");
             else
                 printf("%0.f\n",a/b);
     }
return 0;
}
