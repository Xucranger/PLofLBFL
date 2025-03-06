#include<stdio.h>
int main()
{
	int a,b,n,m;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
			if(b!=0)
		{
			n=a/b;
			m=a%b;
			if(m>=5)
			printf("%d",n+1);
			else
			printf("%d",n);
		}
		if(b==0)
		printf("error");
	}
	return 0;
}
