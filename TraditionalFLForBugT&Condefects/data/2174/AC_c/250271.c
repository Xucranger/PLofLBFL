#include <stdio.h>
void main()
{
	int a,b,d;
	float c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else {c=(float)a/b;
		d=a/b;
		c=c-d;
		if(c>=0.5)
		printf("%d\n",a/b+1);
		else printf("%d\n",a/b);
		}
	}
}
