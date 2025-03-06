#include<stdio.h>
int main()
{
	int a,b,c,i,N;
	N=100;
	for(i=0;i<N;i++)
	{
		scanf("%d %d",&a,&b);
		if(b==0)
		printf("error") ;
		else
		{
			c=a/b;
			printf("%d",c);
		}
	}
	return 0;
}
