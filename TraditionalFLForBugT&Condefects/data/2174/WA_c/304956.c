#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,f;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{
			c=(a+(b/2))/b;
			printf("%d\n",c);
		}
	}
	printf("\n");
}
