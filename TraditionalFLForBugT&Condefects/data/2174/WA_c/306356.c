#include<stdio.h>
int main()
{
int a,b;
	float c; 
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)printf("error\n");
		else 
		{
		c=a*1.0/b;
		printf("%.f\n",c);
		}
	}
	return 0;
}
