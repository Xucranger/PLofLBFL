#include<stdio.h>
int main()
{
	float p,q;
	int a,b;
	while(scanf("%d%d",&a,&b)!=EOF) 
	{
		if(b==0)
		printf("error\n");
		else
		{ 
			p=(float)a/b;
			q=p-(int)p;
			if(q>=0.5)
			printf("%d\n",(int)p+1);
			else
			printf("%d\n",(int)p);
		}
	} 
	return 0;
 } 
