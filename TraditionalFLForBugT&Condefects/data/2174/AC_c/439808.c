#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else if(a==0)
			printf("0\n");
		else
		{
			float c;
		int d;
		c=a*1.0/b;
		d=a/b;
		if(c*10-d*10>=5)
		{
			d++;
			printf("%d\n",d);
		}
		else
			printf("%d\n",d);	
		}
	}
}
