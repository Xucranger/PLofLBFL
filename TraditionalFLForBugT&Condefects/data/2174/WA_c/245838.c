#include<stdio.h>
void main()
{
	int a[2][2];
	int i,j;
	for(i=0;i<2;i++)
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	for(i=0;i<2;i++)
	{
		if(i==0)
		{
		if(a[i][i+1]==0)
		printf("error");
		else
		printf("%d",a[i][i]/a[i][i+1]);
		}
		else
		{
			if(a[i][i]==0)
			printf("error");
			else
			printf("%d",a[i][i-1]/a[i][i]);
		}
	}
}
