#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			if((a%b)/(b*1.0)>=0.5)
			printf("%d\n",(a/b)+1);
			else printf("%d\n",a/b);
		}
	}
}
