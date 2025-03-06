#include<stdio.h>
int main()
{
	int a,b;
	float chu;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else if(a<b)
		{
			chu=a*1.0/b;
			if(chu<0.5)
			printf("0\n");
			else
			printf("1\n");
		}
		else if(a==b)	printf("1\n");
		else
		{
			if((a%b)==0)
			printf("%d\n",a/b);
			else
			{
				chu=a*1.0/b;
				if((chu-a/b)<0.5)
				printf("%d\n",a/b);
				else
				printf("%d\n",a/b+1);
			}
		}
	}
	return 0;
}
