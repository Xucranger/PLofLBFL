#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	int i,j,x,y;
	while(scanf("%d %d",&x,&y)!=EOF)
	{
		if(y!=0)
		{
			int s=x%y;
			float n=(float)s/(float)y;
			if(n>=0.5)
			printf("%d\n",((x/y)+1));
			if(n<0.5)
			printf("%d\n",(x/y));
		}
		if(y==0)
		{
			printf("error\n");
		}
	}
	return 0;
}
