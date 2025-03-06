#include<stdio.h>
int main()
{
int a,c,f,b;
while(scanf("%d %d",&a,&b)!=EOF)
{
if(b==0)
printf("error");
   else
   {
   c=a%b;
   if(c>=b/2.0)
	   f=1;
   else
	   f=0;
   printf("%d\n",a/b+f);
   }
}
return 0;
}
