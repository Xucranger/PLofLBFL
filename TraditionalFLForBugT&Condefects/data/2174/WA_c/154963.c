#include<stdio.h>
int main()
{
	int x,y,s;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		if(y==0)
		printf("error\n");
		else if(y!=0)
		{
		s=x/y;
		printf("%d\n",s);
	    }
	}
	return 0;
}
