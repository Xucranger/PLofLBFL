#include<stdio.h>
int main(void)
{
	float a,b,sum;
   while(scanf("%f%f",&a,&b)!=EOF)
   {
   	if(b==0)
   	{
   		printf("error");
	   }
	   else
	   {
	   	sum=a/b+0.5;
	   	printf("%d\n",(int)(sum+0.5));
	   }
   }
	return 0;
}
