#include<stdio.h>
int nearestInt(float a)
{
	int b,c;
	c=(int)(a*10);
	c%10<5 ? (b=(int)(a)) : (b=(int)(a)+1);
	return b;
}
int main()
{
	float a,b,c;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else 
		{
			c=a/b;
			printf("%d",nearestInt(c));
		}	
	 } 
	return 0;
}
