#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c;
	int n;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			c=a/b;
			n=round(c);
			printf("%d\n",n);
		}
	}
	return 0;
}
