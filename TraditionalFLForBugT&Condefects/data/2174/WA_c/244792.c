#include<stdio.h>
int main()
{
	int i;
	int a[20],c[20],b[20];
	for(i=0;i<2;i++)
		scanf("%f %f",&a[i],&c[i]);
	for(i=0;i<2;i++)
	{
		if(c[i]!=0)
		{
			b[i]=a[i]/c[i];
			printf("%d\n",b[i]);
		}
		else
			printf("error");
	}
}
