#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	while(scanf("%d %d", &a, &b)!=EOF){
	if(b==0)
	printf("error\n");
	else
	{
		int m = round(1.0*a/b);
		printf("%d\n", m);
	}
}
}
