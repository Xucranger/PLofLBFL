#include <stdio.h>
void main()
{
float a,b;
	(scanf("%d %d", &a,&b) !=EOF);
	if(b=0)
		printf("error");
	else
		printf("%d\n",a/b+0.5);
}
