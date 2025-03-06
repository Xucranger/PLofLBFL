#include <stdio.h>
int main()
{
	int a[2][2];
	int i;
	int j;
	int c;
	int d;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(a[0][1]==0&&a[1][1]==0)
	{
		printf("error\n");
	}
	else if(a[0][1]==0)
	{
		c=a[1][0]/a[1][1];
		printf("%d\nerror\n",c);
	}
	else if(a[1][1]==0)
	{
		c=a[0][0]/a[0][1];
		printf("%d\nerror\n",c);
	}
	else
	{
		c=a[0][0]/a[0][1];
		d=a[1][0]/a[1][1];
		printf("%d,%d",c,d);
	}
	return 0;
}
