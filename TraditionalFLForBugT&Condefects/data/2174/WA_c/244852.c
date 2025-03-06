#include<stdio.h>
int main()
{
	int a[100],c[100],b[100],i;
	for(i=0;i<2;i++)
		scanf("%d %d",&a[i],&c[i]);
	for(i=0;i<100;i++)
	{
		if(c[i]==0)
			printf("error\n");
		else
		{
			b[i]=a[i]/c[i];
			printf("%d\n",b[i]);
		}
	}
}
