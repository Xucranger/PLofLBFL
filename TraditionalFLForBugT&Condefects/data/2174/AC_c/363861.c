#include<stdio.h>
int main()
{
	int a,b,d;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF) 
	{
	//	scanf("%d%d",&a,&b);
		if(b==0) printf("error\n");
		else
		{
		c=a*1.0/b+0.5;
		//printf("%f\n",c);
		d=c/1;
		printf("%d\n",d);
		} 
	}
} 
