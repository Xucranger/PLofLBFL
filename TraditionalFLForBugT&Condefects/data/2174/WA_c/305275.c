#include<stdio.h>
int main()
{
   int a,b,c,d;
   while(scanf("%d %d",&a,&b)!=EOF)
   if(b==0)
   printf("error");
   else
   {
   	c=a/b;
   	d=a%b;
   	if(2*d>=b) c=c+1;
   	printf("%d\n",c);
   }
   return 0;
}
