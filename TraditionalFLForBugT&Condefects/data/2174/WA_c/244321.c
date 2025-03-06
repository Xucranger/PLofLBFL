#include<stdio.h>
int main()
{
	int a,b;
	while ( scanf("%d%d",&a,&b)!=EOF)
	if(b==0)
		printf("error\n");
		else{
	if(a<b)
		{
		if(a>2*b)
			printf("0\n");
			else printf("1\n");
		}
	else
		{
			if(a%b==0)
				printf("%d\n",a/b);
			else
				{
					if(a%b*1.0>=0.5)
						printf("%d\n",a%b+1);
					else
						printf("%d\n",a%b);
				}
		}
 } }
