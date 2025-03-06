#include<stdio.h>
void main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=(float)a/b-a/b;
			if(c>=0.5)
				printf("%d\n",a/b+1);
			else
				printf("%d\n",a/b);
		}
		else
			printf("error\n");
	}
}
