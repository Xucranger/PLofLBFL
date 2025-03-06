#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	int m;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(!b)
		printf("error\n");
		else
		m=round(a/b);
		printf("%d\n",m);
	}
	return 0;
}
