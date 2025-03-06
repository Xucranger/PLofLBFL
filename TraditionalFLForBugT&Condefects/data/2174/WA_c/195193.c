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
a=(int)z;
printf("%d\n",a);
	}
	return 0;
}
