#include<stdio.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=a*1.0/b;
		if(b==0)printf("error\n");
		if(c<0&&c>-0.5) printf("%.0f\n",0-c);
		else printf("%.0f\n",c);
	}
	return 0;
 } 
