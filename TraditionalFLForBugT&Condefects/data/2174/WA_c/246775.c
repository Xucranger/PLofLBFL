#include<stdio.h>
int main()
{
	int a,b,i,d;
	float c;
	for (i=0;scanf("%d%d",&a,&b)!=EOF;i++)
	{
		scanf("%d%d",&a,&b);
		if (b==0)
			printf("error\n");
		else
		{
			c=(float)a/b;
			d=a/b;
			if ((c-d)>=0.5)
				printf("%d\n",d+1);
			else
				printf("%d\n",d);
		}
	}
	return 0;
}
