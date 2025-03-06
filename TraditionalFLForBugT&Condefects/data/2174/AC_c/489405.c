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
			int c=0,d=0;
			c=a/b;
			d=a%b;
			d=d*10;
			if((d/b)>=5)
			c++;
			printf("%d\n",c);
		}
		a=0;b=0;
	}
}
