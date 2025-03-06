#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else
		printf(".0f",a/b*1.0);
	}
}
