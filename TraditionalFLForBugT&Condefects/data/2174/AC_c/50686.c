#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c;
	while(scanf("%lf%lf", &a, &b) != EOF){
		if(b == 0)	printf("error\n");
		else{
			c = a / b;
			//printf("%lf\n",c);
			if(c - floor(c) >= 0.5)
				printf("%d\n", (int)(floor(c)) + 1);
			else
				printf("%d\n", (int)(floor(c)));
		}
	}
	return 0;
}
