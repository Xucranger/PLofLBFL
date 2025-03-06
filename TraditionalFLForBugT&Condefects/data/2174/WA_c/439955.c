#include<stdio.h>
int main()
{
	char ch;
	int a[1000],b[1000],i,j=0;
	for(i=0;ch!=EOF;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		j++;
		ch=getchar();
	}
	for(i=0;i<=j;i++)
	{
		if(b[i]==0)
		printf("error\n");
		else
		printf("%d\n",a[i]/b[i]);
	}
}
