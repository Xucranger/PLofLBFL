#include<stdio.h> 
int main()
{
	int a,b,k,n,sum;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			k=a*10/b;
			n=a/b;
			sum=k-n*10;
			if(sum>=5)
			printf("%d\n",n+1);
			else
			printf("%d\n",n);
		}
	}
}
