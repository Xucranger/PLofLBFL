#include<stdio.h>
int main()
{	
	int a,b,c,d;
	while(scanf("%d%d",&a,&b)!=EOF)
{
	if(b==0)
		printf("error\n");
	else
	{
			if(a/b==0)
				printf("0\n");
			else if(a%b==0)
				printf("%d\n",a/b);
			else if(a%b!=0)
			{if(a%b*10>=5)
				printf("%d\n",a%b+1);
				else
					printf("%d\n",a%b);}
	}}
	return (0);
}
