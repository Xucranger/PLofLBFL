#include<stdio.h>
 int main()
 {int a,b,c,d,e;
 while(scanf("%d%d",&a,&b)!=EOF)
   {
     if(b==0)
     {printf("error\n");}
     else
     {c=a/b;
     d=a%b;
     e=2*d;
     if(e>=b)
        {c=c+1;}
     printf("%d\n",c);}
   }
 return 0;
 }
