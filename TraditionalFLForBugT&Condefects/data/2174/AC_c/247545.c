#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else{
			double c;
			int n;
			c=1.0*a/b;
			n=a/b;
				if(c-n>=0.5)
				n=n+1;
			printf("%d\n",n);
			}
	}
}
