#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,d;
    float c;
     while (scanf("%d %d",&a,&b) != EOF)
     {
         if(b!=0)
         {
            c=(float)a/b;
            d=(int)(c+0.5);
            printf("%d\n",d);
         }
         else
         {
         printf("error\n");
         }
     }
     return 0;
}
