#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int a,b,j=0,k;
	int s,temp;
	int m[100][2];
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		m[j][0]=a;
		m[j][1]=b;
		j=j+1;
	}
	m[j+1][0]='\0';
	for(k=0;k<j;k++)
	{
		if(m[k][1]==0)
		  printf("error\n");
		else 
		{
			temp=m[k][0]%m[k][1];
			if((2*temp)>=m[k][1])
			{
				s=m[k][0]/m[k][1]+1;
			}
			else   s=m[k][0]/m[k][1];
			printf("%d\n",s); 
		}
	}
	return 0;
}
