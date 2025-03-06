#include<stdio.h> 
int main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else
		{
			c=a/b;
			if((a%b)>=5)
				c=c+1;
			printf("%d",c);
		}
	}
	return 0;
}
