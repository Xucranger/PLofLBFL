#include<stdio.h>
int main()
{
	int a,b,c,d;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{
			c=(a*10)/b;
			d=a/b;
			c=c%10;
			if(c>=5)
				d++;
			printf("%d\n",d);
		}
		else
		printf("error\n");
	}
	return 0;
}
