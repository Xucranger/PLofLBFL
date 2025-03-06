#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF)
		if(b==0)
			printf("Error\n");
		else
			printf("%d\n",(a+(b/2))/b);
	return 0;
}
