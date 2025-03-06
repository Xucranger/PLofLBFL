#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)==2)
	{
		if(!b)
		{
			printf("error\n");
			continue;
}
double z,m=a,n=b;
z=m/n;
printf("%.0lf\n",z);
	}
	return 0;
}
