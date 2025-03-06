#include<stdio.h>
void main()
{
	int x,a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{x=(int)(a*1.0/b+0.5);
		printf("%d\n",x);}
	}
}
