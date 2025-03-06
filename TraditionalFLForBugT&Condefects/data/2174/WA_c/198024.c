#include<stdio.h>
int main()
{
    float a,b;
    int c;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
          c=(int)(a/b+0.5);
          if(b==0)
          printf("error");
          else
          printf("%d",c);
     }
}
