#include<stdio.h>
void main()
 {
 int a,b,c,d;
 while (scanf("%d %d",&a,&b)!=EOF)
   { if(b==0)
        {printf("error\n");}
     else
       {c=(a*10)/b;
       d=(c+5)/10;
       printf("%d\n",d);}
   }
 }
