#include <stdio.h>
int main ()
{
	int a,b,c;
	float d;
	while(~scanf("%d%d",&a,&b))
	{
		if(b==0)
			printf("error\n");
		else
		{
			d=(double)a/b;
			c=d+0.5;
			printf("%d\n",c);
		}	
	}
	return 0;
}
