#include<stdio.h>
int main()
{	int a,b;
	int c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{	if(b==0)
			printf("error\n");
		else
		{	if(a<b)
				printf("0\n");
			else if(a==b)
				printf("1\n");
			else 
			{	c=a/b;
				d=a-b*c;
				if(d<0.5*b)
					printf("%d\n",c);
				else 
					printf("%d\n",c+1);
			}
		}
	}
	return 0;
}
