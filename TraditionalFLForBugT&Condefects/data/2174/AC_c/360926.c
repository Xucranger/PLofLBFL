#include<stdio.h>
int main()
{
	int a,b,c,k;
	float m,n,x;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if (b==0) printf("error\n");
		else 
		{
			c=a%b; k=a/b;
			m=c; n=b; x=m/n; 
			if (x>=0.5) k++;
			printf("%d\n",k); 
		}
	}
}
