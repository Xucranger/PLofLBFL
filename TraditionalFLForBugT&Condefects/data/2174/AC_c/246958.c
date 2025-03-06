#include<stdio.h>
int main()
{
	int a,b,i,d;
	for (i=0;scanf("%d%d",&a,&b)!=EOF;i++)
	{
		if (b==0)
			printf("error\n");
		else
		{
			d=(int)(1.0*a/b+0.5);
			printf("%d\n",d);
		}
	}
	return 0;
}
