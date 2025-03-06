#include<stdio.h>
int main(void)
{
	int a[100],b[100];
	int i,j,k,s;
	i=0;
	while(scanf("%d %d",&a[i],&b[i])!=0&&i<100)
	{
		if(b[i]==0)
		{
			printf("error");
		}
		else
		{
			s=a[i]%b[i];
			if(s>0.5*b[i])
			{
			printf("%d",a[i]/b[i]+1);	
			}
		else
		{
			printf("%d",a[i]/b[i]);
		}
		}
		i++;	
	}
	return 0;
}
