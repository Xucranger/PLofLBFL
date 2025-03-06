#include<stdio.h>
int main()
{
	int n,i;
	float a[20],c[20],b[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f %f",&a[i],&c[i]);
	for(i=0;i<n;i++)
	{
		if(c[i]!=0)
		{
			b[i]=a[i]/c[i];
			printf("%.2f\n",b[i]);
		}
		else
			printf("error");
	}
}
