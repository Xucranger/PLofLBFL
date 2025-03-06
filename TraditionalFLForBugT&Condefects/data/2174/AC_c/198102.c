#include<stdio.h>
int main()
{
	int a,b,c;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)printf("error\n");
		else
		{
			c=(int)((0.1*a)/(0.1*b)+0.5);
			printf("%d\n",c);
		}
	}
	return 0;
}
