#include <stdio.h>
int main()
{
	float a,b,d;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(!b)
			printf("error\n");
		else
			d=(int)(a/b+0.5);	 
		printf("%.0f\n",d);
	}
	return 0;
}
