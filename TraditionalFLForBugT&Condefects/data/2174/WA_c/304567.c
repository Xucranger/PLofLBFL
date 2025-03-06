#include<stdio.h>
int main()
{
	int a,b,result;
	float temp;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error");
		else
		{
			if(a<b)
			{
				result=a/b;
				temp=(a*1.0)/b;
				if((temp+0.5)>1)
				printf("%d\n",result+1);
				else
				printf("%d\n",result);
			}
			else 
			{
				if(a==b)
				printf("1");
				else
				{
					result=a/b;
			        temp=(a*1.0)/b;
			        if((temp+0.5)>(b-1))
			        printf("%d\n",result+1);
			        else
			        printf("%d\n",result);
				}
			}
		}
	}
	return 0;
} 
