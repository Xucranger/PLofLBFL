#include<stdio.h>
int main()
{
	int c,a,b;
	while(scanf("%d %d",&a,&b)!=EOF) 
	{
	if(b==0)
	printf("error\n");
	else
	printf("%d\n",a/b);
	}
	return 0;
 } 
