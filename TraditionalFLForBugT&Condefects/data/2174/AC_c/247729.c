#include<stdio.h>
int main()
{
   int a,b,c;
   while(scanf("%d%d",&a,&b)!=EOF)
   {
     if(b==0)
	 printf("error\n");
	 else
	 {
	 	if(a%b==0)
	 	printf("%d\n",a/b);
	 	else
		{
		c=a%b;	
	 	if(2*c>=b)
	 	printf("%d\n",a/b+1);
	 	else
	 	printf("%d\n",a/b);
	    }
	 }
   }	
   return 0;
} 
