#include<stdio.h>
#include<string.h>
int main()
{
	int a,b;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		else
			printf("%d\n",(a/b)+0.5);
	}
	return 0;
}
