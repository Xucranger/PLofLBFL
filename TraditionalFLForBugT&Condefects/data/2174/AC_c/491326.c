#include<stdio.h>
int main()
{
	int a,b,x;
	float y;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(b==0)
		printf("error\n");
		else
		{
			x=(1.0*a/b*10+5)/10;
			printf("%d\n",x);
		}
	} 
	return 0;
 } 
