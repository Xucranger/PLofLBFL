#include <stdio.h>
int main()
{
    double a,b;
    while(scanf("%lf %lf",&a, &b) != EOF)
    {
    	if(b!=0)
    	printf("%d\n",((int)(a/b+0.5)));
    	else
    	printf("error\n");
    }
	return 0;
}
