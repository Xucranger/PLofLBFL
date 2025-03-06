#include<stdio.h>
int main(void)
{
	float a,b,sum;
	void pd(float a,float b);
   while(scanf("%f%f",&a,&b)!=EOF)
   {
   	pd(a,b);
   }
	return 0;
}
void pd(float a,float b)
{
	if(b==0)
   	{
   		printf("error\n");
	   }
	   else
	   {
	   printf("%d\n",(int)(a/b+0.5));
	   }
}
