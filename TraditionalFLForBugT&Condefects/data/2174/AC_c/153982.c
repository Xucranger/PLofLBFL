#include<stdio.h>
void main()
{
	int a,b,y;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{y=(float)a/b+0.5;
		printf("%d\n",y);}
	}
}
