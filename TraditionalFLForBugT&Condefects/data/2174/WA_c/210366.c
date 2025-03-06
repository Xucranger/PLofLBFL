#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,sum,sum2,result;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
	if(b==0)
	{
	printf("error\n");
	continue;
	}
	sum = a/b;
	sum2 = (sum*10)%10;
	if(sum2<=4)
	{
		result=((sum*10)-sum2)/10;
		printf("%d\n",result+1);
	}
	if(sum2>=5)
	{
		for(int i=1;i<10;i++)
			{
				result=i+sum*10;
				if(result%10==0)
				result=result/10;
				printf("%d\n",result);
				break;
			}
	}
	}
	return 0;
}
