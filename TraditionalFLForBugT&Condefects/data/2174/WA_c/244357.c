#include<stdio.h>
int main(void)
{
	int a[100],b[100],i,sum=0;
    for(i=0;i<100;i++)
    {
	    sum++;
    	scanf("%d%d",&a[i],&b[i]);
    	if(a[i]==0&&b[i]==0)
    	{
    		break;
		}
	}	
		for(i=0;i<sum-1;i++)
		{
			if(b[i]==0)
			{
				printf("error\n");
			}
			else
			{
				if((float)(a[i]%b[i])>=0.5*b[i])
				{
					printf("%d\n",a[i]/b[i]+1);
				}
				else
				{
					printf("%d\n",a[i]/b[i]);
				}
			}
		}
	return 0;
}
