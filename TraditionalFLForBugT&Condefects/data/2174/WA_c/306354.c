#include<stdio.h>
int main()
{
float a,b;
	float c; 
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		if(b==0)printf("error\n");
		else 
		{
		c=a/b;
		printf("%.f\n",c);
		}
	}
	return 0;
}
