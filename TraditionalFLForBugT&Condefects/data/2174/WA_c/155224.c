#include<stdio.h>
int main()
{
	int a,b;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
		{
		printf("error\n");
		}
		else
		printf("%.f\n",1.0*a/b);
	}
	return  0;
}
