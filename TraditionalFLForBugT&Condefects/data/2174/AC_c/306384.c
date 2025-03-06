#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else 
		{
			c=a/b;
			d=(10*a)/b-10*c;
			if(d>=5)
				printf("%d\n",c+1);
			else
				printf("%d\n",c);
		}
	}
	return 0;
} 
