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
			printf("error\n");
		else 
		{
			c=a/b;
			printf("%d\n",nearestInt(c));
		}	
	 } 
	return 0;
}
