#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,sum,sum2,result;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	{
	printf("error");
	continue;
	}
	sum = a+b;
	sum2 = sum%10;
	if(sum2<=4)
	{
		result=sum-sum2;
		printf("%d",result);
	}
	if(sum2>=5)
	{
		for(int i=1;i<10;i++)
			{
				result=i+sum;
				if(result%10==0)
				printf("d",result);
				break;
			}
	}
	}
	return 0;
}
