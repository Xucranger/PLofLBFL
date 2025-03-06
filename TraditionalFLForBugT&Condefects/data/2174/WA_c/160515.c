#include<stdio.h>
#include<stdlib.h>
void chufa(int a[2][2])
{
	int i;
	for(i=0;i<2;i++)
	{
		if(a[i][1]==0)
		printf("ERROR");	
        if(a[i][1]!=0)
		{
			int c;
			int d,b;
			d=a[i][0];b=a[i][1];
			c=d/b;
			printf("%d",c);
		}	
	}
}
int main()
{
	int a[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	chufa((&a)[2]);
}
