#include<stdio.h>
int main()
{
	int a,b,d,e,f;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		c=a*1.0/b;
		d=c*10;
		e=d/10;
		f=e+1;
		if(b==0)
		printf("error\n");
		else
		{
		if((d-e*10)>=5)
		printf("%d\n",f);
		else
		printf("%d\n",e);
		}
	}
 } 
