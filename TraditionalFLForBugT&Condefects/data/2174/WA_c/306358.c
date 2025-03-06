#include<stdio.h>
void main()
{
	float a,b,d,e;
	int c;
	while((scanf("%f%f",&a,&b))!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{
			c=a/b;
			d=a/b;
			e=d-c;
			if(e>=0.5)
				printf("%d\n",c+1);
			else
				printf("%d\n",c);
		}
	}
}
