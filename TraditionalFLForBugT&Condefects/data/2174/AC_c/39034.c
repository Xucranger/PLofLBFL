#include<stdio.h>
void main()
{
	float a,b;
	while(scanf("%f%f",&a,&b)!=EOF)
	{
		int x;
		if(b!=0)
		{
		x=(int)(a/b+0.5);
		printf("%d\n",x);
		}
		else
			printf("error\n");
	}
}
