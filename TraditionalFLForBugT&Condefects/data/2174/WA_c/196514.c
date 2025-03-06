#include<stdio.h>
int main()
{
	int a,b,d;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a*(1.0/b);
			d=a/b;
			if((c-d)>=0.5)
			printf("%d",d+1);
			else printf("%d",d);
		}
	}
	return 0;
}
