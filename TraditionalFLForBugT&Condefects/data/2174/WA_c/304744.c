#include <stdio.h>
int main()
{
	int a,b,c;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else
		{
			printf("%d\n",a/b);
		}
	}
		return 0;
}
