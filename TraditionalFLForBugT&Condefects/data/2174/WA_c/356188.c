#include<stdio.h>
void fact(int a[5][2])
{
	int d,i;
	float c,m;
	for(i=0;i<5;i++)
	{
		if(a[i][1]==0)
		{
			printf("error");
			printf("\n");
		}
		else
		{
			c=a[i][0]*1.0/a[i][1];
		    d=a[i][0]/a[i][1];
		    m=c-d;
		    if(m>=1.0/2)
			{
				d=d+1;
				printf("%d",d);
				printf("\n");
			}
			else
			{
				printf("%d",d);
				printf("\n");
			}
		}
	}
}
void main()
{
	int a[5][2],i,j;
	for(i=0;i<5;i++)
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
		fact(a);
}
