#include<stdio.h>
int main()
{
	int a[2],b[2],i;
	for(i=0;i<2;i++)
	scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<2;i++)
	{
		if(b[i]==0)
		printf("error\n");
		else
		printf("%d\n",a[i]/b[i]);
	}
}
