#include <stdio.h>
void main()
{
float a,b;
int c;
	(scanf("%f %f", &a,&b) !=EOF);
	if(b==0)
		printf("error");
	else
		c=a/b+0.5;
		printf("%d\n",c);
}
