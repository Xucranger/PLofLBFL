#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d",&b);
		if(b==0)
		printf("error\n");
		else
		{
			c=a/b;
			if((a%b)*2>=b)
			c=c+1;
			printf("%d\n",c);
		}
	}
	return 0;
} 
