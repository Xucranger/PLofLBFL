#include<stdio.h>
main()
{
    float a,b,y;
    int x;
   while( scanf("%f %f",&a,&b)!=EOF)
   {
       if (b!=0)
      {
       y=(a/b);
       x=(int)(y+0.5);
       printf("%d\n",x);
      }
       else
        printf("error\n");
   }
}
