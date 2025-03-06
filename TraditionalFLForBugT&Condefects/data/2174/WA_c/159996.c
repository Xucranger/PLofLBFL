#include<stdio.h>
int main()
{
	int a[100],b[100];
	int i;
	for(i=0;i<2;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		if(b[i]==0)
		printf("error\n");
		else
		printf("%d\n",a[i]/b[i]);
	}
}
