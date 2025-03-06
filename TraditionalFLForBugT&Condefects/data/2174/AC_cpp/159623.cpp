#include<stdio.h>
int main()
{
	int a,b,m,k;
	float n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			m=0;
			n=0;
			k=0;
			m=int(a/b);
			n=float(a)/float(b);
			n=n*10;
			k=n;
			if(k%10>=5)
			{
				m=m+1;
			}
			printf("%d\n",m);
		}
	}
}
