#include<stdio.h>
int main()
{
	int a,b,m;
	float c;
	while((scanf("%d %d",&a,&b))!=EOF)
	{
		if(b==0)printf("error\n");
		else
		{
			c=a/b;
			int m=c;
			if((c-m)>=0.5)printf("%d\n",m+1);
			else printf("%d\n",m);
		}
	}
	return 0;
}
