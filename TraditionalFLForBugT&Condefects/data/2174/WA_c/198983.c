#include <stdio.h>
int main()
{
	int a,b;
	while(scanf("%f %f",&a,&b)==2)
	{
		if(b==0)
			printf("error");
		else
			printf("%.0f",a/b);
	}
	return 0;
}
