#include<stdio.h>
void main()
{
	int a,b,t;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error");
		else
		{
			t=(int)(a/b);
			printf("%d",t);
		}
	}
}
