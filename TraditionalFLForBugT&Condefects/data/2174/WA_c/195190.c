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
double z;
z=a/(double)b;
printf("%.0lf\n",z);
	}
	return 0;
}
