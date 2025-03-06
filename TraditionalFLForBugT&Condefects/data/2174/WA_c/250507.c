#include <stdio.h>
   void main()
{
   int a,b,c;
   while((scanf("%d %d",&a,&b))!=EOF)
  {
    if(b!=0)
        {c=a/b;
        printf("%d\n",c);}
    else
        printf("error\n");
}}
