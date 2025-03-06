#include <stdio.h>
int main()
{
	int a,b;
	float result;
	while(~scanf("%d %d",&a,&b))
	{
		if(b==0)
			printf("error\n");
		else
		{
			result=1.0*a/b;
			if(result>=0)
			{
				if(result+0.5>=a/b+1)
					printf("%d\n",a/b+1);
				else
					printf("%d\n",a/b);
			}
			else
			{
				if(result-0.5>=a/b-1)
					printf("%d\n",a/b);
				else
					printf("%d\n",a/b-1);
			}
		}
	}
	return 0;
}
