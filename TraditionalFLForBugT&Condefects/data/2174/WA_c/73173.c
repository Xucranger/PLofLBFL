#include <stdio.h>
int main()
{
	int m,n;
	int i;
	while(scanf("%d %d",&m,&n)!=EOF)
	{
		if(n==0)
			printf("error");
		else
		{
			i=m/n;
			printf("%d\n",i);
		}
	}
	return 0;
}
