#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=a*1.0/b;
		if(b==0)printf("error\n");
		else printf("%.0f\n",c);
	}
	return 0;
 } 
