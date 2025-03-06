#include <stdio.h>
void main()
{
	int a,b;
	int n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			n=a/(double)b+0.5;
				printf("%d\n",n);
		}
	}
}
