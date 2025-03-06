#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	while(~scanf("%d %d",&a,&b))
	{
		if(b==0)
		printf("error\n");
		else
		{
			printf("%d\n",(a+(b/2))/b);
		}
	}
}
