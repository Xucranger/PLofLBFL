#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=(double)a/b;
		c=c+0.5;
		c=floor(c);
		if(b==0)printf("error\n");
		else printf("%.0f\n",c);
	}
	return 0;
 } 
