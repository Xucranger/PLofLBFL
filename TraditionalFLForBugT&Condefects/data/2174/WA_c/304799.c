#include<stdio.h>
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else 
		{
  			c=a%b;
			if(c>=5)
			printf("%d\n",a/b+1);
			printf("%d\n",a/b);
		}
	}
}
