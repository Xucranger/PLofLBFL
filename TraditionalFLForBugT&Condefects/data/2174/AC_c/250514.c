#include <stdio.h>
   void main()
{
   int a,b,c,d;
   while((scanf("%d %d",&a,&b))!=EOF)
  {
    if(b!=0)
        {c=a/b;
        d=a%b;
        if(d*2>=b && d!=0)
            c++;
        printf("%d\n",c);}
    else
        printf("error\n");
}}
