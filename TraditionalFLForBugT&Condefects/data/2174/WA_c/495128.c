#include <stdio.h>
int main()
{
	int a=0,b=0,k;
	float c,w;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		c=1.0*a/b;
		k=a/b;
		w=c-k;
		printf("%d\n",k);
	}  
}
