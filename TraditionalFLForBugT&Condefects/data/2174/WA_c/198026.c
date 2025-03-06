#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	if(b==0)
		printf("error");
	else
	{
		c=(float)a/(float)b;
		printf("%.lf",c);
	}
	return 0;
}
