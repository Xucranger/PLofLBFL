#include<stdio.h>
void main()
{
	int j,k,m,q;
	float n;
	while(scanf("%d %d",&m,&q)!=EOF)
	{if(q==0)
			printf("error");
	 else
	 {		n=1.0*m/q;
	 if(n>=0)
			k=n+0.5;
	 else if(n<0)
			k=n-0.5;
		printf("%d",k);
	}
	}
}
