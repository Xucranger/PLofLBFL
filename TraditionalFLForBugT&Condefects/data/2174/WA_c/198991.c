#include<stdio.h>
int main()
{
	float c,d;
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF) 
	{
	if(b==0)
	printf("error\n");
	else
	{ 
	c=(float)a/b;
	d=c-(int)c;
	if(d>=0.5)
	printf("%d",(int)c+1);
	else
	printf("%d",(int)c);
	}
	} 
	return 0;
 } 
