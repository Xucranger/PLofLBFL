#include<stdio.h>
main()
{
	int a,b,c;
	while(scanf("%d %d",&a,&b)!=EOF)//多行输入和输出// 
	{
		if(b==0)
		printf("error\n");
		else 
		{
			c=(a+b/2)/b;//important//
			printf("%d\n",c);
		}
	}
 } 
