#include<stdio.h>
int main()
{
	int d;
	int a,b;
	for(;scanf("%d %d",&a,&b)!=EOF;)
	{
		if(b==0)
			printf("error\n");
		else
		{	
			d=1.0*a/b+0.5;
			printf("%d\n",d);
		}
	}
	return 0;
}
