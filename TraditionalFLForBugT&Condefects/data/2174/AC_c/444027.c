#include<stdio.h>
#include<math.h>
int main()
{
	double a,b;
	int c;
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
	if(b==0)
	printf("error\n");
	else
	{
		c=round(a/b);
		printf("%d\n",c);
	}
}
	return 0;
}
