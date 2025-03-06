#include <stdio.h>
int main ()
{
	int a[1000][2],i,j,r[1000],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		 scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		 if(a[i][1]==0)
		  r[i]=-1;
		 else
		  r[i]=(int)((a[i][0]/a[i][1])+0.5);
	}
	for(i=0;i<n;i++)
	{
		if(r[i]==-1)
		 printf("error\n");
		else
		 printf("%d\n",r[i]);
	}
	return 0;
}
