#include <stdio.h>
int main()
{
	int a=0,b=0,d;
	float c,q;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
		{
			printf("error\n");
			continue;
		}
		c=1.0*a/b;
		d=a/b;
		q=c-d;
		if(q>0.49)
			d++;
		printf("%d\n",d);
	}  
}
