#include <stdio.h>
int main()
{
	int a,b,c,i;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if (a<b)
		{
			if(a*10/b>5)
				printf("1\n");
			else printf("0\n");
		}
	else if(b==0)
		printf("error\n");
	else 
	{
		i=a%b;
	c=a/b;
	if (i*10/b>=5)
	{c=c+1;
printf("%d\n",c);
	}
	else printf("%d\n",c);
	}
	}
	return 0;
}
