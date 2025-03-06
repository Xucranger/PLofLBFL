#include<stdio.h>
int main()
{
    float a,b,c;
    int d;
    while(scanf("%f %f",&a,&b)!=EOF)
    {
         if(b!=0)
         {
             c=a/b;
             c=c+0.5;
             d=c;
             printf("%d\n",d);
         }
         else
         printf("error\n");
    }
    return 0;
}
