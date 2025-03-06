#include<stdio.h>
int main()
{
    float a,b;
    int m;
    while(scanf("%f%f",&a,&b)!=EOF)
    {
      if(b==0)
        printf("error\n");
      else
      {
        m=(a/b)+0.5;
        printf("%d\n",m);
      }
    }
    return 0;
}
