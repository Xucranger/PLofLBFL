#include<stdio.h>  
int main(void)
{
	int m,n,i=0,j;
	int s,t;
	int a[100][2];
	while(scanf("%d%d",&m,&n)!=EOF)
	{
		a[i][0]=m;
		a[i][1]=n;
		i=i+1;
	}
	a[i+1][0]='\0';
	for(j=0;j<i;j++)
	{
		if(a[j][1]==0)
		  printf("error\n");
		else 
		{
			t=a[j][0]%a[j][1];
			if((2*t)>=a[j][1])
			{
				s=a[j][0]/a[j][1]+1;
			}
			else   s=a[j][0]/a[j][1];
			printf("%d\n",s); 
		}
	} 
}
