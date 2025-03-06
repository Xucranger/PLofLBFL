#include<stdio.h> 
int main()
{
	int a,b;
	while((scanf("%d%d",&a,&b))!=EOF)
	{
		if (b==0)
		printf("error\n");
		else
		{
			if(2*(a%b)>=b)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
	}
	return 0;
}
