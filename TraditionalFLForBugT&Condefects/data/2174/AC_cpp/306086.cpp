#include <stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=(float)a/b;
			if((c-a/b)>=0.5)
			printf("%d\n",(a/b)+1);
			else 
			printf("%d\n",a/b);
		}
	}
}
