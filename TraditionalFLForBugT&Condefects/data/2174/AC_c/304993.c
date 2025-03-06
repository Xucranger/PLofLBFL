#include<stdio.h>
int main()
{
	int a,b,s;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			float c=(int)(a);
			float d=(int)(b);
			s=(int)(c/d+0.5);
			printf("%d\n",s);
		}
	}
 } 
