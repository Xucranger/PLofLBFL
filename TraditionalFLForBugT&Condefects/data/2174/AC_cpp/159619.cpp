#include<stdio.h>
int main()
{
	int a,b;
	float m;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(b!=0)
		{	
			m=(float)a/b;
		int y=(int)(m+0.5);
		printf("%d\n",y);
		}
		else
		printf("error\n");
	}
	return 0;
}
