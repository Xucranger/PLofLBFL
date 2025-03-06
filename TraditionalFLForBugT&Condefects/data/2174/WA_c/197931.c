#include<stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else 
		printf("%d",(int)(a/b+0.5));
	}
	return 0;
}
