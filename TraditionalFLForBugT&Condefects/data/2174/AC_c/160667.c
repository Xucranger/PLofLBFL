#include<stdio.h>
int main()
{
   int a,b;
   float c;
   while(scanf("%d %d",&a,&b)==2)
   {
       c=(float)a/(float)b;
       if(b==0)
       printf("error\n");
       else if(c>=a/b+0.5)
            printf("%d\n",a/b+1);
            else printf("%d\n",a/b);
   }
}
