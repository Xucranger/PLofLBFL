#include<stdio.h>
int main()
{
   float a,b,c;
   int d;
   while(scanf("%d %d",&a,&b)!=EOF)
   {
       if(b==0)
       printf("error\n");
       if(b!=0)
       {c=a/b;
       d=(int)(c+0.5);
       printf("%d\n",d);
       }
   }
   return 0;
}
