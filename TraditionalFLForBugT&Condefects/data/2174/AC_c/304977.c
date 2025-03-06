#include<stdio.h>
int main()
{
	int a,b,result;
	float temp;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			if(a<b)
			{
				result=a/b;
				temp=(a*1.0)/b;
				if((temp-result)>=0.5)
				printf("%d\n",result+1);
				else
				printf("%d\n",result);
			}
			else 
			{
				if(a%b==0) 
				printf("%d\n",a/b);
				else
				{
					result=a/b;
			        temp=(a*1.0)/b;
			        if((temp-result)>=0.5)
			        printf("%d\n",result+1);
			        else
			        printf("%d\n",result);
				}
			}
		}
	}
	return 0;
} 
