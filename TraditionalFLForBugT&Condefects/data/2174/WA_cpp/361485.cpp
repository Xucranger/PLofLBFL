#include<stdio.h>
int main()
{
	int a,b,sum;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		sum=0;
		if(b!=0)
		{
			sum=a/b;
		    printf("%d\n",sum);
		}
		else
		    printf("error\n");
	}
	return 0;	
}
