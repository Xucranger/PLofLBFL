#include<stdio.h>
void main()
{
	int a,b,d;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			c=a*1.0/b;
		if(c>=0)
			d=c+0.5;
		else 
			d=c-0.5;
		printf("%d\n",d);
		}
	}
}
