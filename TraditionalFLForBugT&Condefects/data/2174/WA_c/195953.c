#include <stdio.h>
int main()
{
	float a,b;
	while(scanf("%f %f",&a,&b)!=EOF)
	{
		if(!b)
			printf("error\n");
		else	 
		printf("%.0f\n",(int)((a/b)+0.5));
	}
	return 0;
}
