#include <stdio.h>
int main()
{
	int a=10,b=3;
	int x,s;
	float y,c;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else 
		{
			x=a/b;
			y=(float) a/b;
			c=y-x;
			if(c<0.5)
				s=x;
			else
				s=x+1;
			printf("%d\n",s);
		}
	}
	return 0;
}
