#include<stdio.h>
int main()
{
	float a,b,c;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			printf("%1.0f\n",a/b);
		}
		else
		printf("error\n");
	}
	return 0;
}
