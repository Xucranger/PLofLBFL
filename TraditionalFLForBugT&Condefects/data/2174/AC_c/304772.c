#include <stdio.h>
int main()
{
	int a,b,c,x,y;
	while (scanf("%d %d",&a,&b)!=EOF)
	{
		if(b==0)
		printf("error\n");
		else
		{
			x=(a*10)/b;
			y=x%10;
			if(y>4)
			printf("%d\n",a/b+1);
			else
			printf("%d\n",a/b);
		}
	}
		return 0;
}
