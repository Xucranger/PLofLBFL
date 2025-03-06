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
			c=(float)a/(float)b;
			printf("%d",(int)(c+0.5));
		}
	}
}
