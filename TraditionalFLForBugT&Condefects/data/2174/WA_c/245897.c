#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b) != EOF)
	{
		if(b)
			printf("%d\n",a / b);
		else 
			printf("error\n");
	}
}
