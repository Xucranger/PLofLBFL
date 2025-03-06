#include<string.h>
#include<malloc.h> 
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h>
int main()
{
	float a,b;
	int c;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		c=(int)((a/b)+0.5);
		printf("%d\n",c);
	}
	return 0;
}
