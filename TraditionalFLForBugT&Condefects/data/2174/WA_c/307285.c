#include<stdio.h>
void main()
{
	int c;
	float a,b,d,e;
	scanf("%d %d",&a,&b);
	if(b==0)
	printf("error");
	else
	{
		c=a/b;
		d=a/b;
		if(c<0)
		{
			e=c-d;
			if(e>=0.5)
				printf("%d",c-1);
			else
				printf("%d",c);
		}
		else
		{
			e=d-c;
			if(e>=0.5)
				printf("%d",c+1);
			else
				printf("%d",c);
		}
	}
}
