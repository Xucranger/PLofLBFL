#include <stdio.h>
void main ()
{
   int a,b,d;
   float c;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
	  if(b==0)   printf ("error");
	  else
	  {
	   c=(a*1.00)/(b*1.00);
	   d=a/b;
	   if((c-d)>=0.5)     d++;
	   printf("%d\n",d);
	  }
   }
} 
