#include<stdio.h>
int main()
{
   int a,b;
   while(scanf("%d %d",&a,&b)!=EOF);
   {
     if(!b)
	 printf("error");
	 else
	 printf("%d",a/b);	
   }	
   return 0;
} 
