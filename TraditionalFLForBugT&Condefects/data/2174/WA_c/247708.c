#include<stdio.h>
int main()
{
   int a,b,c;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
     if(!b)
	 printf("error");
	 else
	 {
	 	c=a/b;
	 	if(a%b>=0.5*b)
	 	c++;
	 	else;
	 	printf("%d",c);
	 }
   }	
   return 0;
} 
