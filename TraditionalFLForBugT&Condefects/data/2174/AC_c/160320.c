#include<stdio.h>
void main()
{
	int a,b,c,d;
	while (scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			d=a%b;
			if(2*d>=b)
				c=a/b+1;
			else
				c=a/b;
			printf("%d\n",c);
		}
	}
}
