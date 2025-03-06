#include <stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=(int)(a/(float)b+0.5);
		if(b==0)
			printf("error\n");
		else
			printf("%d\n",c);
	}
	return 0;
}
