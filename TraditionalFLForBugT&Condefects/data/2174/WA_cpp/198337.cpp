#include<stdio.h>
int main()
{
	int a,b,n;
	float m,t;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
		}
		else
		{
			n=a/b;
			m=a/b;
			t=(m-n)/10;
			if(t>=5)
			{
				printf("%d\n",n+1);
			}
			else
			{
			    printf("%d\n",n);
			}
		}
	}
	return 0;
}
