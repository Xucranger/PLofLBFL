#include<stdio.h>
int main()
{
	int a,b,divide;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(b==0)
			printf("error\n");
		else
		{
			divide=a/b;
			if((float)(a%b)>=(float)b/2.)
				divide++;
			printf("%d\n",divide);
		}
	}
	return 0;
}
