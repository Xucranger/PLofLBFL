#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(!b)	printf("error\n");
		else if((float)a/b-a/b>=0.5)
			printf("%d\n",a/b+1);
		else 
			printf("%d\n",a/b);			 
	}
	return 0;
}
