#include <stdio.h>
int main(void)
{
	int a,b;
	float c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		if(b==0)
			printf("error\n");
		else
		{
			float x,y;
			x=(float)a;
			y=(float)b;
			c=x/y;
			if(c-a/b>0.4)
			printf("%d\n",a/b+1);
            else
            printf("%d\n",a/b);		
		}
	}
}
