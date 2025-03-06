#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		float c=0;
		if(b==0)
		printf("error\n");
		else
		{
			c=(a*(1.0))/b-a/b;
			if(c>=0.5)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
	}
	return 0;
}
