#include<stdio.h>
int main()
{
	int a[1000],b[1000],i=0,j=0,k;
	double n;
	while((scanf("%d %d",&a[i],&b[i]))!=EOF)
	{
		if(b[i]==0)
		printf("ERROR\n");
		if(b[i]!=0)
		{
			n=(double)(a[i])/(double)(b[i])+0.5; 
			k=(int)(n);
			printf("%d\n",k);
		}
		i++;
	}
	return 0;
 } 
